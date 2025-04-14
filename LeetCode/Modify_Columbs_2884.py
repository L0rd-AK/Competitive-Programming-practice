import pandas as pd; 
modifySalaryColumn = lambda df: df.assign(salary=df['salary'] * 2)