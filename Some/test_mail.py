import re
import random
import smtplib


def generate_code():
    code = ""
    for i in range(6):
        code += str(random.randint(0, 9))
    return code


def send_mail(code):
    email = 'bot.authentication.code@yandex.ru'
    password = 'zohyghofhbxmjpww'

    server = smtplib.SMTP('smtp.yandex.ru', 587)
    server.starttls()
    server.login(email, password)

    while True:
        dest_email = input("Enter your email: ")
        if re.match(r"[^@]+@[^@]+\.[^@]+", dest_email):
            break
        else:
            print("Invalid email address. Please try again.")

    name = input('Your name: ')
    subject = 'Verification code'
    email_text = 'Hi, ' + name + \
        ', you have registered in the bot nazvaniya poka net(. Your verification code is'
    email_code = code
    email_end = 'This email is sent automatically at registration, do not need to answer it.'
    message = 'From: %s\nTo: %s\nSubject: %s\n\n%s %s\n\n%s' % (
        email, dest_email, subject, email_text, email_code, email_end)

    server.sendmail(email, dest_email, message)
    server.quit()


def register_user(code):
    for Try in range (3, 0, -1):
        user_code = input("Enter the verification code sent to your email: ")
        if user_code == code:
            print("Registration successful!")
            break
        else:
            if Try == 1:
                print("Invalid verification code.\nTry again leter.")
            else:
                print("Invalid verification code.")
                print("Attempts left: ", Try - 1)
            


code = generate_code()
send_mail(code)
register_user(code)
