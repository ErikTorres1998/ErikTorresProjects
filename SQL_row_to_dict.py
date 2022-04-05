import sqlite3

con = sqlite3.connect("chinook.db") # Connect to DB
cur = con.cursor()


sql = "SELECT * FROM employees WHERE EmployeeId = 1 " # select from employees table where the Employee ID is 1 ONLY


for row in cur.execute(sql): # iterate thought row

    row_names = row
desc = cur.description
column_names = [col[0] for col in desc] # get column names


print(column_names)
print(list(row_names))

info_dict = {} 
for i, j in zip(column_names, row_names): # iterate thorough both lists 
    info_dict[i] = j # add to dict
print(info_dict)
