import pandas as pd

def selectData(students: pd.DataFrame) -> pd.DataFrame:
    columns = ['name','age']
    df = students.loc[students['student_id'] == 101, columns]
    return df