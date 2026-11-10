import pandas as pd
import json
import sys

def verify_bom(bom_path):
    print(f"[*] Analyzing BOM file: {bom_path}")
    try:
        df = pd.read_csv(bom_path)
    except Exception as e:
        print(f"[Error] Failed to read BOM: {e}")
        return False
        
    eol_count = 0
    print("\n[1] Lifecycle Status Check:")
    for idx, row in df.iterrows():
        if row['Status'] == 'EOL':
            print(f"  ⚠️ ALERT: Component {row['Component']} ({row['Part Number']}) is EOL (End of Life)!")
            eol_count += 1
            
    print(f"\n[Result] Lifecycle Check: Found {eol_count} EOL components.")
    return eol_count == 0

if __name__ == "__main__":
    bom_file = "templates/bom_sample.csv"
    if len(sys.argv) > 1:
        bom_file = sys.argv[1]
    verify_bom(bom_file)
