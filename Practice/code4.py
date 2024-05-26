import csv
import pandas as pd

def bmr_male(data1, Height, Weight, Age):
    result = 0
    
    with open(data1, 'r') as file:
        csv_reader = csv.DictReader(file)
        for row in csv_reader:
            value1 = float(row[Height])
            value2 = float(row[Weight])
            value3 = float(row[Age])
            result += (10*value2) + (6.25*value1) - (5*value3) + 5            
    return result
def bmr_female(data1, Height, Weight, Age):
    result = 0
    
    with open(data1, 'r') as file:
        csv_reader = csv.DictReader(file)
        for row in csv_reader:
            value1 = float(row[Height])
            value2 = float(row[Weight])
            value3 = float(row[Age])
            result += (10*value2) + (6.25*value1) - (5*value3) - 161            
    return result

data1 = '/Users/maitripatel/Desktop/Record.csv'
data = pd.read_csv('/Users/maitripatel/Desktop/Record.csv')
column_name1 = 'Height'
column_name2 = 'Weight'
column_name3 = 'Age'
result_male = bmr_male(data1, column_name1, column_name2, column_name3)
result_female = bmr_female(data1, column_name1, column_name2, column_name3)

gender_values = data['Gender']

for value in gender_values:
    if value == 'Male':
        print(result_male)
    else:
        print(result_female)


