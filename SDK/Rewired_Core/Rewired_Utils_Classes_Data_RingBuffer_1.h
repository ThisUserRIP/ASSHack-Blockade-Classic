#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
namespace mscorlib::System::Collections::Generic { template <typename T> struct IEqualityComparer_1; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
namespace mscorlib::System::Collections::Generic { template <typename T> struct IEnumerator_1; };
namespace mscorlib::System::Collections { struct IEnumerator; };

namespace Rewired_Core::Rewired::Utils::Classes::Data
{
	template <typename T> struct RingBuffer_1 : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass()
		{
			IL2CPP::Array<mscorlib::System::Type*>* arrayType = new IL2CPP::Array<mscorlib::System::Type*>();
			arrayType->max_length = 1;
			arrayType->vector[0] = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(T::GetIl2CppClass()));
			intptr_t handle = ((intptr_t)il2cpp_class_get_type(GetIL2CppClass("Rewired_Core.dll", "Rewired.Utils.Classes.Data", "RingBuffer`1")));
			const IL2CPP::Il2CppType* Il2CppType = (const IL2CPP::Il2CppType*)(mscorlib::System::Type::internal_from_handle(handle)->MakeGenericType(arrayType)->get_TypeHandle().value);
			IL2CPP::Il2CppClass* il2cppclass = il2cpp_class_from_type(Il2CppType);
			return il2cppclass;
		}
		static mscorlib::System::Type* GetIl2CppType()
		{
			static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
			return il2cpptype;
		}
		IL2CPP::Array<T>* bCzaxLPNgpeLaGPzSeDuOKFMdnmj;
		int32_t kGYIJpmeZMocutLvQTsNJcYZrjv;
		int32_t uksefAaLQpTevghfLeLUkBXMIby;
		int32_t KXbtRhwVybajKwaQetRyPKsLdPa;
		int32_t HeSdnEwzLQPRCCrhJVuvhZhxjcM;
		int32_t boMePckijakfWPIPgxolIDsYbDa;
		int32_t RulKRvTYsDnNUVIqbCLSeBAUgBT;
		mscorlib::System::Collections::Generic::IEqualityComparer_1<T>* qoWoWJbMrMIwHkiDgEkpUPHHksW;
		int32_t get_Count()
		{
			static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_Count");
			Il2CppException* Il2CppException = nullptr;
			IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
			Il2CppExceptionMessage(Il2CppException);
			if (returnValue == nullptr)
			{
				int32_t ret;
				std::memset(&ret, 0, sizeof(int32_t));
				return ret;
			}
			return static_cast<int32_t>(*(int32_t*)il2cpp_object_unbox(returnValue));
		}
		int32_t get_Capacity()
		{
			static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_Capacity");
			Il2CppException* Il2CppException = nullptr;
			IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
			Il2CppExceptionMessage(Il2CppException);
			if (returnValue == nullptr)
			{
				int32_t ret;
				std::memset(&ret, 0, sizeof(int32_t));
				return ret;
			}
			return static_cast<int32_t>(*(int32_t*)il2cpp_object_unbox(returnValue));
		}
		int32_t get_OverrunCount()
		{
			static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_OverrunCount");
			Il2CppException* Il2CppException = nullptr;
			IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
			Il2CppExceptionMessage(Il2CppException);
			if (returnValue == nullptr)
			{
				int32_t ret;
				std::memset(&ret, 0, sizeof(int32_t));
				return ret;
			}
			return static_cast<int32_t>(*(int32_t*)il2cpp_object_unbox(returnValue));
		}
		mscorlib::System::Collections::Generic::IEqualityComparer_1<T>* get_EqualityComparer()
		{
			static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_EqualityComparer");
			Il2CppException* Il2CppException = nullptr;
			IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
			Il2CppExceptionMessage(Il2CppException);
			return (mscorlib::System::Collections::Generic::IEqualityComparer_1<T>*)returnValue;
		}
		void set_EqualityComparer(mscorlib::System::Collections::Generic::IEqualityComparer_1<T>* value)
		{
			static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "set_EqualityComparer", std::vector<std::string> { "System.Collections.Generic.IEqualityComparer`1<T>" });
			intptr_t* params = new intptr_t[1];
			params[0] = (intptr_t)value;
			Il2CppException* Il2CppException = nullptr;
			il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
			delete [] params;
			Il2CppExceptionMessage(Il2CppException);
		}
		T* get_Item(int32_t index)
		{
			static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_Item", std::vector<std::string> { "System.Int32" });
			intptr_t* params = new intptr_t[1];
			params[0] = (intptr_t)&index;
			Il2CppException* Il2CppException = nullptr;
			IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
			delete [] params;
			Il2CppExceptionMessage(Il2CppException);
			return GetGenericValue<T>(returnValue);;
		}
		void set_Item(int32_t index, T* value)
		{
			static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "set_Item", std::vector<std::string> { "System.Int32", GetGenericTypeName<T>() });
			intptr_t* params = new intptr_t[2];
			params[0] = (intptr_t)&index;
			params[1] = (intptr_t)value;
			Il2CppException* Il2CppException = nullptr;
			il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
			delete [] params;
			Il2CppExceptionMessage(Il2CppException);
		}
		void _ctor(int32_t capacity)
		{
			static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor", std::vector<std::string> { "System.Int32" });
			intptr_t* params = new intptr_t[1];
			params[0] = (intptr_t)&capacity;
			Il2CppException* Il2CppException = nullptr;
			il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
			delete [] params;
			Il2CppExceptionMessage(Il2CppException);
		}
		void Enqueue(T* item)
		{
			static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Enqueue", std::vector<std::string> { GetGenericTypeName<T>() });
			intptr_t* params = new intptr_t[1];
			params[0] = (intptr_t)item;
			Il2CppException* Il2CppException = nullptr;
			il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
			delete [] params;
			Il2CppExceptionMessage(Il2CppException);
		}
		bool EnqueueIfUnique(T* item)
		{
			static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "EnqueueIfUnique", std::vector<std::string> { GetGenericTypeName<T>() });
			intptr_t* params = new intptr_t[1];
			params[0] = (intptr_t)item;
			Il2CppException* Il2CppException = nullptr;
			IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
			delete [] params;
			Il2CppExceptionMessage(Il2CppException);
			if (returnValue == nullptr)
			{
				bool ret;
				std::memset(&ret, 0, sizeof(bool));
				return ret;
			}
			return static_cast<bool>(*(bool*)il2cpp_object_unbox(returnValue));
		}
		T* Dequeue()
		{
			static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Dequeue");
			Il2CppException* Il2CppException = nullptr;
			IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
			Il2CppExceptionMessage(Il2CppException);
			return GetGenericValue<T>(returnValue);;
		}
		T* Peek()
		{
			static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Peek");
			Il2CppException* Il2CppException = nullptr;
			IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
			Il2CppExceptionMessage(Il2CppException);
			return GetGenericValue<T>(returnValue);;
		}
		bool Contains(T* item)
		{
			static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Contains", std::vector<std::string> { GetGenericTypeName<T>() });
			intptr_t* params = new intptr_t[1];
			params[0] = (intptr_t)item;
			Il2CppException* Il2CppException = nullptr;
			IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
			delete [] params;
			Il2CppExceptionMessage(Il2CppException);
			if (returnValue == nullptr)
			{
				bool ret;
				std::memset(&ret, 0, sizeof(bool));
				return ret;
			}
			return static_cast<bool>(*(bool*)il2cpp_object_unbox(returnValue));
		}
		bool Contains(T* item, mscorlib::System::Collections::Generic::IEqualityComparer_1<T>* comparer)
		{
			static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Contains", std::vector<std::string> { GetGenericTypeName<T>(), "System.Collections.Generic.IEqualityComparer`1<T>" });
			intptr_t* params = new intptr_t[2];
			params[0] = (intptr_t)item;
			params[1] = (intptr_t)comparer;
			Il2CppException* Il2CppException = nullptr;
			IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
			delete [] params;
			Il2CppExceptionMessage(Il2CppException);
			if (returnValue == nullptr)
			{
				bool ret;
				std::memset(&ret, 0, sizeof(bool));
				return ret;
			}
			return static_cast<bool>(*(bool*)il2cpp_object_unbox(returnValue));
		}
		int32_t IndexOf(T* item)
		{
			static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "IndexOf", std::vector<std::string> { GetGenericTypeName<T>() });
			intptr_t* params = new intptr_t[1];
			params[0] = (intptr_t)item;
			Il2CppException* Il2CppException = nullptr;
			IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
			delete [] params;
			Il2CppExceptionMessage(Il2CppException);
			if (returnValue == nullptr)
			{
				int32_t ret;
				std::memset(&ret, 0, sizeof(int32_t));
				return ret;
			}
			return static_cast<int32_t>(*(int32_t*)il2cpp_object_unbox(returnValue));
		}
		int32_t IndexOf(T* item, mscorlib::System::Collections::Generic::IEqualityComparer_1<T>* comparer)
		{
			static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "IndexOf", std::vector<std::string> { GetGenericTypeName<T>(), "System.Collections.Generic.IEqualityComparer`1<T>" });
			intptr_t* params = new intptr_t[2];
			params[0] = (intptr_t)item;
			params[1] = (intptr_t)comparer;
			Il2CppException* Il2CppException = nullptr;
			IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
			delete [] params;
			Il2CppExceptionMessage(Il2CppException);
			if (returnValue == nullptr)
			{
				int32_t ret;
				std::memset(&ret, 0, sizeof(int32_t));
				return ret;
			}
			return static_cast<int32_t>(*(int32_t*)il2cpp_object_unbox(returnValue));
		}
		bool Remove(T* item)
		{
			static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Remove", std::vector<std::string> { GetGenericTypeName<T>() });
			intptr_t* params = new intptr_t[1];
			params[0] = (intptr_t)item;
			Il2CppException* Il2CppException = nullptr;
			IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
			delete [] params;
			Il2CppExceptionMessage(Il2CppException);
			if (returnValue == nullptr)
			{
				bool ret;
				std::memset(&ret, 0, sizeof(bool));
				return ret;
			}
			return static_cast<bool>(*(bool*)il2cpp_object_unbox(returnValue));
		}
		bool Remove(T* item, mscorlib::System::Collections::Generic::IEqualityComparer_1<T>* comparer)
		{
			static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Remove", std::vector<std::string> { GetGenericTypeName<T>(), "System.Collections.Generic.IEqualityComparer`1<T>" });
			intptr_t* params = new intptr_t[2];
			params[0] = (intptr_t)item;
			params[1] = (intptr_t)comparer;
			Il2CppException* Il2CppException = nullptr;
			IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
			delete [] params;
			Il2CppExceptionMessage(Il2CppException);
			if (returnValue == nullptr)
			{
				bool ret;
				std::memset(&ret, 0, sizeof(bool));
				return ret;
			}
			return static_cast<bool>(*(bool*)il2cpp_object_unbox(returnValue));
		}
		void RemoveAt(int32_t index)
		{
			static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "RemoveAt", std::vector<std::string> { "System.Int32" });
			intptr_t* params = new intptr_t[1];
			params[0] = (intptr_t)&index;
			Il2CppException* Il2CppException = nullptr;
			il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
			delete [] params;
			Il2CppExceptionMessage(Il2CppException);
		}
		int32_t RemoveAll(T* item)
		{
			static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "RemoveAll", std::vector<std::string> { GetGenericTypeName<T>() });
			intptr_t* params = new intptr_t[1];
			params[0] = (intptr_t)item;
			Il2CppException* Il2CppException = nullptr;
			IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
			delete [] params;
			Il2CppExceptionMessage(Il2CppException);
			if (returnValue == nullptr)
			{
				int32_t ret;
				std::memset(&ret, 0, sizeof(int32_t));
				return ret;
			}
			return static_cast<int32_t>(*(int32_t*)il2cpp_object_unbox(returnValue));
		}
		int32_t RemoveAll(T* item, mscorlib::System::Collections::Generic::IEqualityComparer_1<T>* comparer)
		{
			static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "RemoveAll", std::vector<std::string> { GetGenericTypeName<T>(), "System.Collections.Generic.IEqualityComparer`1<T>" });
			intptr_t* params = new intptr_t[2];
			params[0] = (intptr_t)item;
			params[1] = (intptr_t)comparer;
			Il2CppException* Il2CppException = nullptr;
			IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
			delete [] params;
			Il2CppExceptionMessage(Il2CppException);
			if (returnValue == nullptr)
			{
				int32_t ret;
				std::memset(&ret, 0, sizeof(int32_t));
				return ret;
			}
			return static_cast<int32_t>(*(int32_t*)il2cpp_object_unbox(returnValue));
		}
		void Clear()
		{
			static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Clear");
			Il2CppException* Il2CppException = nullptr;
			il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
			Il2CppExceptionMessage(Il2CppException);
		}
		int32_t PxXTdJUEdUmuOfhLzHWoLmDEiTzA(T* A_1)
		{
			static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "PxXTdJUEdUmuOfhLzHWoLmDEiTzA");
			intptr_t* params = new intptr_t[1];
			params[0] = (intptr_t)A_1;
			Il2CppException* Il2CppException = nullptr;
			IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
			delete [] params;
			Il2CppExceptionMessage(Il2CppException);
			if (returnValue == nullptr)
			{
				int32_t ret;
				std::memset(&ret, 0, sizeof(int32_t));
				return ret;
			}
			return static_cast<int32_t>(*(int32_t*)il2cpp_object_unbox(returnValue));
		}
		int32_t PxXTdJUEdUmuOfhLzHWoLmDEiTzA(T* A_1, mscorlib::System::Collections::Generic::IEqualityComparer_1<T>* A_2)
		{
			static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "PxXTdJUEdUmuOfhLzHWoLmDEiTzA");
			intptr_t* params = new intptr_t[2];
			params[0] = (intptr_t)A_1;
			params[1] = (intptr_t)A_2;
			Il2CppException* Il2CppException = nullptr;
			IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
			delete [] params;
			Il2CppExceptionMessage(Il2CppException);
			if (returnValue == nullptr)
			{
				int32_t ret;
				std::memset(&ret, 0, sizeof(int32_t));
				return ret;
			}
			return static_cast<int32_t>(*(int32_t*)il2cpp_object_unbox(returnValue));
		}
		void lVvDoepavxghBKDSifBAYNJDedg(int32_t A_1)
		{
			static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "lVvDoepavxghBKDSifBAYNJDedg");
			intptr_t* params = new intptr_t[1];
			params[0] = (intptr_t)&A_1;
			Il2CppException* Il2CppException = nullptr;
			il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
			delete [] params;
			Il2CppExceptionMessage(Il2CppException);
		}
		bool vWnzDBatwcsdmQGaivqUmHrNCoG(int32_t A_1)
		{
			static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "vWnzDBatwcsdmQGaivqUmHrNCoG");
			intptr_t* params = new intptr_t[1];
			params[0] = (intptr_t)&A_1;
			Il2CppException* Il2CppException = nullptr;
			IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
			delete [] params;
			Il2CppExceptionMessage(Il2CppException);
			if (returnValue == nullptr)
			{
				bool ret;
				std::memset(&ret, 0, sizeof(bool));
				return ret;
			}
			return static_cast<bool>(*(bool*)il2cpp_object_unbox(returnValue));
		}
		int32_t GoMhQQvksweCsHazgUslqNCNTgxh(int32_t A_1)
		{
			static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GoMhQQvksweCsHazgUslqNCNTgxh");
			intptr_t* params = new intptr_t[1];
			params[0] = (intptr_t)&A_1;
			Il2CppException* Il2CppException = nullptr;
			IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
			delete [] params;
			Il2CppExceptionMessage(Il2CppException);
			if (returnValue == nullptr)
			{
				int32_t ret;
				std::memset(&ret, 0, sizeof(int32_t));
				return ret;
			}
			return static_cast<int32_t>(*(int32_t*)il2cpp_object_unbox(returnValue));
		}
		int32_t HnmaUKDjuORGxMZfgwMDagLJlMT(int32_t A_1)
		{
			static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "HnmaUKDjuORGxMZfgwMDagLJlMT");
			intptr_t* params = new intptr_t[1];
			params[0] = (intptr_t)&A_1;
			Il2CppException* Il2CppException = nullptr;
			IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
			delete [] params;
			Il2CppExceptionMessage(Il2CppException);
			if (returnValue == nullptr)
			{
				int32_t ret;
				std::memset(&ret, 0, sizeof(int32_t));
				return ret;
			}
			return static_cast<int32_t>(*(int32_t*)il2cpp_object_unbox(returnValue));
		}
		void System_Collections_Generic_ICollection_T__Add(T* item)
		{
			static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "System.Collections.Generic.ICollection<T>.Add", std::vector<std::string> { GetGenericTypeName<T>() });
			const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
			intptr_t* params = new intptr_t[1];
			params[0] = (intptr_t)item;
			Il2CppException* Il2CppException = nullptr;
			il2cpp_runtime_invoke(virtualAddress, this, (void**)params, &Il2CppException);
			delete [] params;
			Il2CppExceptionMessage(Il2CppException);
		}
		void System_Collections_Generic_ICollection_T__Clear()
		{
			static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "System.Collections.Generic.ICollection<T>.Clear");
			const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
			Il2CppException* Il2CppException = nullptr;
			il2cpp_runtime_invoke(virtualAddress, this, nullptr, &Il2CppException);
			Il2CppExceptionMessage(Il2CppException);
		}
		bool System_Collections_Generic_ICollection_T__Contains(T* item)
		{
			static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "System.Collections.Generic.ICollection<T>.Contains", std::vector<std::string> { GetGenericTypeName<T>() });
			const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
			intptr_t* params = new intptr_t[1];
			params[0] = (intptr_t)item;
			Il2CppException* Il2CppException = nullptr;
			IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(virtualAddress, this, (void**)params, &Il2CppException);
			delete [] params;
			Il2CppExceptionMessage(Il2CppException);
			if (returnValue == nullptr)
			{
				bool ret;
				std::memset(&ret, 0, sizeof(bool));
				return ret;
			}
			return static_cast<bool>(*(bool*)il2cpp_object_unbox(returnValue));
		}
		void System_Collections_Generic_ICollection_T__CopyTo(IL2CPP::Array<T>* array, int32_t arrayIndex)
		{
			static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "System.Collections.Generic.ICollection<T>.CopyTo", std::vector<std::string> { GetGenericTypeName<T>() + (std::string)"[]", "System.Int32" });
			const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
			intptr_t* params = new intptr_t[2];
			params[0] = (intptr_t)array;
			params[1] = (intptr_t)&arrayIndex;
			Il2CppException* Il2CppException = nullptr;
			il2cpp_runtime_invoke(virtualAddress, this, (void**)params, &Il2CppException);
			delete [] params;
			Il2CppExceptionMessage(Il2CppException);
		}
		int32_t System_Collections_Generic_ICollection_T__get_Count()
		{
			static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "System.Collections.Generic.ICollection<T>.get_Count");
			const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
			Il2CppException* Il2CppException = nullptr;
			IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(virtualAddress, this, nullptr, &Il2CppException);
			Il2CppExceptionMessage(Il2CppException);
			if (returnValue == nullptr)
			{
				int32_t ret;
				std::memset(&ret, 0, sizeof(int32_t));
				return ret;
			}
			return static_cast<int32_t>(*(int32_t*)il2cpp_object_unbox(returnValue));
		}
		bool System_Collections_Generic_ICollection_T__get_IsReadOnly()
		{
			static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "System.Collections.Generic.ICollection<T>.get_IsReadOnly");
			const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
			Il2CppException* Il2CppException = nullptr;
			IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(virtualAddress, this, nullptr, &Il2CppException);
			Il2CppExceptionMessage(Il2CppException);
			if (returnValue == nullptr)
			{
				bool ret;
				std::memset(&ret, 0, sizeof(bool));
				return ret;
			}
			return static_cast<bool>(*(bool*)il2cpp_object_unbox(returnValue));
		}
		bool System_Collections_Generic_ICollection_T__Remove(T* item)
		{
			static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "System.Collections.Generic.ICollection<T>.Remove", std::vector<std::string> { GetGenericTypeName<T>() });
			const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
			intptr_t* params = new intptr_t[1];
			params[0] = (intptr_t)item;
			Il2CppException* Il2CppException = nullptr;
			IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(virtualAddress, this, (void**)params, &Il2CppException);
			delete [] params;
			Il2CppExceptionMessage(Il2CppException);
			if (returnValue == nullptr)
			{
				bool ret;
				std::memset(&ret, 0, sizeof(bool));
				return ret;
			}
			return static_cast<bool>(*(bool*)il2cpp_object_unbox(returnValue));
		}
		mscorlib::System::Collections::Generic::IEnumerator_1<T>* System_Collections_Generic_IEnumerable_T__GetEnumerator()
		{
			static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "System.Collections.Generic.IEnumerable<T>.GetEnumerator");
			const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
			Il2CppException* Il2CppException = nullptr;
			IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(virtualAddress, this, nullptr, &Il2CppException);
			Il2CppExceptionMessage(Il2CppException);
			return (mscorlib::System::Collections::Generic::IEnumerator_1<T>*)returnValue;
		}
		mscorlib::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator()
		{
			static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "System.Collections.IEnumerable.GetEnumerator");
			const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
			Il2CppException* Il2CppException = nullptr;
			IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(virtualAddress, this, nullptr, &Il2CppException);
			Il2CppExceptionMessage(Il2CppException);
			return (mscorlib::System::Collections::IEnumerator*)returnValue;
		}
	};
}

