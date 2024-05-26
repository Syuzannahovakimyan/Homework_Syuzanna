#pragma once
#include <utility>
#include <exception>
#include <cstddef>
#include <cassert>


template<typename T>
class DoublyLinkedList {

	struct Node {
		T data;
		Node* prev = nullptr;
		Node* next = nullptr;
		Node(const T& data_) : data(data_), prev(nullptr), next(nullptr) {};
	};

	class iterator {
		Node* m_curr = nullptr;
		Node* m_prev = nullptr;

	public:
		/*iterator() = default;*/
		iterator(Node* d) { m_curr = d; m_prev = m_curr->prev; }
		iterator(Node* curr, Node* prev) : m_curr(curr), m_prev(prev) {}

		iterator& operator++() {
			assert(m_curr);
			if (!m_curr)
				return *this;

			m_prev = m_curr;
			m_curr = m_curr->next;
			return *this;
		}

		iterator operator++(int) {
			auto ret = *this;
			this->operator++();
			return ret;
		}

		T& operator*()
		{
			assert(m_curr);
			if (m_curr)
				return m_curr->data;
			T t;
			return t;
		}

		iterator& operator--() {
			assert(m_prev);
			if (!m_prev)
				return *this;

			m_curr = m_prev;
			m_prev = m_prev->prev;
			return *this;
		}

		iterator operator--(int) {
			auto ret = *this;
			this->operator--();
			return ret;
		}


	};

public:
	DoublyLinkedList() = default;
	DoublyLinkedList(const DoublyLinkedList<T>&);
	DoublyLinkedList(DoublyLinkedList<T>&&);
	DoublyLinkedList(std::initializer_list<T> il);
	~DoublyLinkedList();

	//functions
	void push_back(const T&);
	void push_front(const T&);
	void erase_back();
	void erase_front();

	iterator begin()
	{
		return iterator(head);
	}
	iterator end()
	{
		return iterator(nullptr, tail);
	}

	bool isEmpty() const;

	//operators
	template<typename U, typename Out>
	friend Out& operator<<(Out&, const DoublyLinkedList<U>&);

	DoublyLinkedList<T>& operator=(const DoublyLinkedList<T>&);
	DoublyLinkedList<T>& operator=(DoublyLinkedList<T>&&);

private:
	Node* head = nullptr;
	Node* tail = nullptr;
};

#include "List.inl"

