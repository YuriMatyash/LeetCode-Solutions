import pandas as pd

def renameColumns(students: pd.DataFrame) -> pd.DataFrame:
    column_map = {
        'id':'student_id',
        'first':'first_name',
        'last':'last_name',
        'age':'age_in_years'
    }

    students.rename(columns=column_map, inplace = True)

    return students