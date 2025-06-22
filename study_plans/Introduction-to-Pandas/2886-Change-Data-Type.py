import pandas as pd

def changeDatatype(students: pd.DataFrame) -> pd.DataFrame:
    data_type_map = {
        'grade':'int'
    }
    df = students.astype(data_type_map)

    return df