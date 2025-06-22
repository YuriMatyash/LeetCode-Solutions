import pandas as pd

def concatenateTables(df1: pd.DataFrame, df2: pd.DataFrame) -> pd.DataFrame:
    # axis=0 -> by row
    # axis=1 -> by column
    df = pd.concat([df1, df2], axis = 0)
    return df