import pandas as pd

def pivotTable(weather: pd.DataFrame) -> pd.DataFrame:
    # index - determines the rows in the new df(each unique value per unique value in that row)
    # columns - determines the cols in the new df(each unique value per unique value in that col)
    # values - specifies the values to be used when the table is reshaped
    df = weather.pivot(index='month', columns='city', values='temperature')
    return df