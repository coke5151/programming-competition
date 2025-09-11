import datetime

y, m, d = map(int, input().split("-"))
user = datetime.date(y, m, d)

if user <= (datetime.date(2023, 10, 21) - datetime.timedelta(35)):
    print("GOOD")
else:
    print("TOO LATE")
