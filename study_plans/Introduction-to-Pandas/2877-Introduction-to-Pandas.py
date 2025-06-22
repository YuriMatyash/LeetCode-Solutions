from typing import List
import pandas as pd

def createDataframe(student_data: List[List[int]]) -> pd.DataFrame:
    columns = ["student_id", "age"]
    df = pd.DataFrame(student_data, columns=columns)
    return df