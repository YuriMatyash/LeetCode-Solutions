from typing import List
import pandas as pd

def getDataframeSize(players: pd.DataFrame) -> List[int]:
    cols, rows = players.shape
    return [cols, rows]