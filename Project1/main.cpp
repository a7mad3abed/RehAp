#include <iostream>
#include <vector>

enum class Difficulty
{
	EASY,
	MEDIUM,
	DIFFICULT
};

class Page {
public:
	Page(int pageNumber, int howOld, Difficulty diff) {
		mPageNumber = pageNumber;
		mHowOld = howOld;
		mDiff = diff;
	}
	int getPageNumber() {
		return mPageNumber;
	}

private:
	int mPageNumber = 0;
	int mHowOld = 0;
	Difficulty mDiff = Difficulty::EASY;
};

class PageSequence {
public:
	PageSequence(std::string seqName) {
		mSeqName = seqName;
	}
	void addPageToSquence(Page page) {
		mPageSequence.push_back(page);
	}

	void removePageFromSequence(Page page) {
		for (int i = 0; i < mPageSequence.size(); i++) {
			if (page.getPageNumber() == mPageSequence[i].getPageNumber()) {
				mPageSequence.erase(mPageSequence.begin() + i);
			}
		}
	}

	Page getPageByNumber(int n) {
		if (n < 0 || n >= mPageSequence.size()) {
			std::cout << "invalid page number";
		}

		return
			mPageSequence[n];
	}

	std::string getSequenceName() {
		return mSeqName;
	}

private:
	std::string mSeqName;
	std::vector<Page> mPageSequence;
};

class Book {
public:
	Book(std::string bookName) {
		mBookName = bookName;
	}

	void addSequence(PageSequence pageSeq) {
		bookSequences.push_back(pageSeq);
	}

	void remSequence(PageSequence pageSeq) {
		for (int i = 0; i < bookSequences.size(); i++) {
			if (pageSeq.getSequenceName() == bookSequences[i].getSequenceName()) {
				bookSequences.erase(bookSequences.begin() + i);
			}
		}
	}

	void newBookSquence()
	{
		
	}

private:
	std::string mBookName;
	std::vector<PageSequence> bookSequences;

};

class RehearsApp {
public:
	RehearsApp() {

	}

private:

};

int main (){
	std::cout << "Hello again";

}
