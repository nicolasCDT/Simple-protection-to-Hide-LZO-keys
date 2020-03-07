// Search :
static DWORD s_adwEterPackSecurityKey[]

// or 
static DWORD s_adwEterPackKey[]

// Simple edit like that :

static DWORD s_adwEterPackKey[] =
{
	generate_key({1931, 23371}),
	generate_key({5, 107, 172649}),
	generate_key({7, 191, 509563}),
	generate_key({3, 157, 3631}),
};

static DWORD s_adwEterPackSecurityKey[] =
{
	generate_key({2, 3, 3, 3, 3, 7, 69623}),
	generate_key({2, 2, 23, 5732047}),
	generate_key({2, 3, 3, 83, 1093}),
	generate_key({2, 7, 7, 29, 171103}),
};

// And add the function : 
static DWORD generate_key(std::vector <DWORD> keys)
{
	DWORD count = 1;

	for (const DWORD& item : keys)
		count *= item;

	return count;
}

/*
 Protection is simple and not very effective. But it gives you an idea.
 The keys are not visible in the hexadecimal because they are calculated by the client at startup.
 
 For example, you can retain their index in prime numbers to calculate them.
 
*/