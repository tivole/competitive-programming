# https://www.hackerrank.com/challenges/nested-list/problem

if __name__ == "__main__":
    name = []
    score = []
    for _ in range(int(input())):
        n = input()
        s = float(input())
        name.append(n)
        score.append(s)

    copy_score = score[:]

    min_score = min(score)

    while copy_score.count(min_score) != 0:
        copy_score.remove(min_score)

    second_min_score = min(copy_score)

    ans_indexes = []
    while score.count(second_min_score) > 0:
        ans_indexes.append(score.index(second_min_score) + len(ans_indexes))
        score.remove(second_min_score)

    ans = [name[i] for i in ans_indexes]

    ans.sort()

    for a in ans:
        print(a)
