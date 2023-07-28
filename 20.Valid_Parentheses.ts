function isValid(s: string): boolean {
    let temp = []  // create empty space
    let store = { ')': '(', '}': '{', ']': '[' } // create dic to search word

    for (let i = 0; i < s.length; i++) {
        if (temp.length < 1) temp.push(s[i]) // 如果temp為空，則加入 '(' or '{' or '['
        else if (temp[temp.length - 1] !== store[s[i]]) { // 查看dic是否相符，不符合即在放入新的'(' or '{' or '['
            //store[s[i]]要注意，s[i]型態為char，但store是dic，因此此處可以讓他查找相符的字典內容
            temp.push(s[i])
        }
        else {
            temp.pop() // 查看dic是否相符，符合即移除
        }
    }

    return !(temp.length > 0) //temp如有剩下即為false
};