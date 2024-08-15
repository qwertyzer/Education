// Инклудим нужные библиотеки

#include <gd.h>
#include <stdio.h>

int main(int argc, char **argv) {
  gdImagePtr im, im_clear;  // обьявляем переменные для хранения указателей на
                            // нарисованные изображения

  int black, white, trans;  // обьявляем переменные для хранения цветов

  FILE *out1;  // обьявляем указатель на файл

  im = gdImageCreate(500, 500);  // создаем пустой лист размером 100х100

  im_clear = gdImageCreate(500, 250);

  white = gdImageColorAllocate(im, 235, 155, 89);  // обьявляем цвета

  black = gdImageColorAllocate(im, 45, 90, 52);

  trans = gdImageColorAllocate(im, 1, 1, 1);
  gdImageRotateInterpolated(im_clear, 42.4, 4);

  gdImageCopy(im_clear, im, 0, 0, 0, 0, 100,
              100);  // Копируем пока еще пустой im в im_clear

  if (argc > 1)
    out1 = fopen(argv[1], "wb");
  else
    out1 = fopen("anim.gif", "wb");  // открываем файл куда сохраним свою гифку

  gdImageGifAnimBegin(im, out1, 1, 0);  // Пишем заголовок gif-а

  for (int i = 0; i < 250; i++)

  {
    gdImageCopy(im, im_clear, 0, 0, 0, 0, 500, 500);  // очищаем лист im

    gdImageRectangle(im, i * 2, i * 2, 500 - i * 2 - 1, 500 - i * 2 - 1,
                     black);  // рисуем квадрат

    gdImageGifAnimAdd(im, out1, 0, 0, 0, 10, 1, NULL);  // пишем кадр в гифку
  };

  putc(';', out1);  // пишем в гифку конец

  fclose(out1);  // закрываем файлик

  gdImageDestroy(im);  // убираем за собой

  gdImageDestroy(im_clear);
}
