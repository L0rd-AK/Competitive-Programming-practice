import sys

def split_balanced(s: str):
    parts = []
    curr = []
    balance = 0
    for ch in s:
        if ch == 'L':
            balance += 1
        else:  # 'R'
            balance -= 1
        curr.append(ch)
        if balance == 0:
            parts.append(''.join(curr))
            curr = []
    return parts

def main():
    data = sys.stdin.read().strip().split()
    if not data:
        return
    s = data[0]
    parts = split_balanced(s)
    print(len(parts))
    for p in parts:
        print(p)

if __name__ == "__main__":
    main()
