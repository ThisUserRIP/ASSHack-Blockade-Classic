#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "System_Int32.h"
namespace mscorlib::System { struct Int32; };
namespace mscorlib::System { struct Object; };
namespace mscorlib::System::Collections::Concurrent { template <typename T> struct ConcurrentQueue_1_Segment; };
#include "System_Void.h"
namespace mscorlib::System { struct Void; };
namespace mscorlib::System { struct Array; };
#include "System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
namespace mscorlib::System::Collections { struct IEnumerator; };
#include "System_Int64.h"
namespace mscorlib::System { struct Int64; };
namespace mscorlib::System::Collections::Generic { template <typename T> struct IEnumerator_1; };

namespace mscorlib::System::Collections::Concurrent
{
	template <typename T> struct ConcurrentQueue_1 : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass()
		{
			IL2CPP::Array<mscorlib::System::Type*>* arrayType = new IL2CPP::Array<mscorlib::System::Type*>();
			arrayType->max_length = 1;
			arrayType->vector[0] = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(T::GetIl2CppClass()));
			intptr_t handle = ((intptr_t)il2cpp_class_get_type(GetIL2CppClass("mscorlib.dll", "System.Collections.Concurrent", "ConcurrentQueue`1")));
			const IL2CPP::Il2CppType* Il2CppType = (const IL2CPP::Il2CppType*)(mscorlib::System::Type::internal_from_handle(handle)->MakeGenericType(arrayType)->get_TypeHandle().value);
			IL2CPP::Il2CppClass* il2cppclass = il2cpp_class_from_type(Il2CppType);
			return il2cppclass;
		}
		static mscorlib::System::Type* GetIl2CppType()
		{
			static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
			return il2cpptype;
		}
		mscorlib::System::Object* _crossSegmentLock;
		mscorlib::System::Collections::Concurrent::ConcurrentQueue_1_Segment<T>* _tail;
		mscorlib::System::Collections::Concurrent::ConcurrentQueue_1_Segment<T>* _head;
		struct StaticFields
		{
			int32_t InitialSegmentLength;
			int32_t MaxSegmentLength;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		void _ctor()
		{
			static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor");
			Il2CppException* Il2CppException = nullptr;
			il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
			Il2CppExceptionMessage(Il2CppException);
		}
		void System_Collections_ICollection_CopyTo(mscorlib::System::Array* array, int32_t index)
		{
			static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "System.Collections.ICollection.CopyTo", std::vector<std::string> { "System.Array", "System.Int32" });
			const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
			intptr_t* params = new intptr_t[2];
			params[0] = (intptr_t)array;
			params[1] = (intptr_t)&index;
			Il2CppException* Il2CppException = nullptr;
			il2cpp_runtime_invoke(virtualAddress, this, (void**)params, &Il2CppException);
			delete [] params;
			Il2CppExceptionMessage(Il2CppException);
		}
		bool System_Collections_ICollection_get_IsSynchronized()
		{
			static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "System.Collections.ICollection.get_IsSynchronized");
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
		mscorlib::System::Object* System_Collections_ICollection_get_SyncRoot()
		{
			static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "System.Collections.ICollection.get_SyncRoot");
			const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
			Il2CppException* Il2CppException = nullptr;
			IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(virtualAddress, this, nullptr, &Il2CppException);
			Il2CppExceptionMessage(Il2CppException);
			return (mscorlib::System::Object*)returnValue;
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
		IL2CPP::Array<T>* ToArray()
		{
			static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ToArray");
			const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
			Il2CppException* Il2CppException = nullptr;
			IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(virtualAddress, this, nullptr, &Il2CppException);
			Il2CppExceptionMessage(Il2CppException);
			return (IL2CPP::Array<T>*)returnValue;
		}
		int32_t get_Count()
		{
			static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_Count");
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
		static int32_t GetCount(mscorlib::System::Collections::Concurrent::ConcurrentQueue_1_Segment<T>* s, int32_t head, int32_t tail)
		{
			static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetCount", std::vector<std::string> { "System.Collections.Concurrent.ConcurrentQueue`1/Segment<T>", "System.Int32", "System.Int32" });
			intptr_t* params = new intptr_t[3];
			params[0] = (intptr_t)s;
			params[1] = (intptr_t)&head;
			params[2] = (intptr_t)&tail;
			Il2CppException* Il2CppException = nullptr;
			IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
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
		static int64_t GetCount(mscorlib::System::Collections::Concurrent::ConcurrentQueue_1_Segment<T>* head, int32_t headHead, mscorlib::System::Collections::Concurrent::ConcurrentQueue_1_Segment<T>* tail, int32_t tailTail)
		{
			static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetCount", std::vector<std::string> { "System.Collections.Concurrent.ConcurrentQueue`1/Segment<T>", "System.Int32", "System.Collections.Concurrent.ConcurrentQueue`1/Segment<T>", "System.Int32" });
			intptr_t* params = new intptr_t[4];
			params[0] = (intptr_t)head;
			params[1] = (intptr_t)&headHead;
			params[2] = (intptr_t)tail;
			params[3] = (intptr_t)&tailTail;
			Il2CppException* Il2CppException = nullptr;
			IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
			delete [] params;
			Il2CppExceptionMessage(Il2CppException);
			if (returnValue == nullptr)
			{
				int64_t ret;
				std::memset(&ret, 0, sizeof(int64_t));
				return ret;
			}
			return static_cast<int64_t>(*(int64_t*)il2cpp_object_unbox(returnValue));
		}
		void CopyTo(IL2CPP::Array<T>* array, int32_t index)
		{
			static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "CopyTo", std::vector<std::string> { GetGenericTypeName<T>() + (std::string)"[]", "System.Int32" });
			const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
			intptr_t* params = new intptr_t[2];
			params[0] = (intptr_t)array;
			params[1] = (intptr_t)&index;
			Il2CppException* Il2CppException = nullptr;
			il2cpp_runtime_invoke(virtualAddress, this, (void**)params, &Il2CppException);
			delete [] params;
			Il2CppExceptionMessage(Il2CppException);
		}
		mscorlib::System::Collections::Generic::IEnumerator_1<T>* GetEnumerator()
		{
			static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetEnumerator");
			const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
			Il2CppException* Il2CppException = nullptr;
			IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(virtualAddress, this, nullptr, &Il2CppException);
			Il2CppExceptionMessage(Il2CppException);
			return (mscorlib::System::Collections::Generic::IEnumerator_1<T>*)returnValue;
		}
		void SnapForObservation(mscorlib::System::Collections::Concurrent::ConcurrentQueue_1_Segment<T>& head, int32_t& headHead, mscorlib::System::Collections::Concurrent::ConcurrentQueue_1_Segment<T>& tail, int32_t& tailTail)
		{
			static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "SnapForObservation", std::vector<std::string> { "System.Collections.Concurrent.ConcurrentQueue`1/Segment<T>&", "System.Int32&", "System.Collections.Concurrent.ConcurrentQueue`1/Segment<T>&", "System.Int32&" });
			intptr_t* params = new intptr_t[4];
			params[0] = (intptr_t)&head;
			params[1] = (intptr_t)&headHead;
			params[2] = (intptr_t)&tail;
			params[3] = (intptr_t)&tailTail;
			Il2CppException* Il2CppException = nullptr;
			il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
			delete [] params;
			Il2CppExceptionMessage(Il2CppException);
		}
		T* GetItemWhenAvailable(mscorlib::System::Collections::Concurrent::ConcurrentQueue_1_Segment<T>* segment, int32_t i)
		{
			static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetItemWhenAvailable", std::vector<std::string> { "System.Collections.Concurrent.ConcurrentQueue`1/Segment<T>", "System.Int32" });
			intptr_t* params = new intptr_t[2];
			params[0] = (intptr_t)segment;
			params[1] = (intptr_t)&i;
			Il2CppException* Il2CppException = nullptr;
			IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
			delete [] params;
			Il2CppExceptionMessage(Il2CppException);
			return GetGenericValue<T>(returnValue);;
		}
		mscorlib::System::Collections::Generic::IEnumerator_1<T>* Enumerate(mscorlib::System::Collections::Concurrent::ConcurrentQueue_1_Segment<T>* head, int32_t headHead, mscorlib::System::Collections::Concurrent::ConcurrentQueue_1_Segment<T>* tail, int32_t tailTail)
		{
			static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Enumerate", std::vector<std::string> { "System.Collections.Concurrent.ConcurrentQueue`1/Segment<T>", "System.Int32", "System.Collections.Concurrent.ConcurrentQueue`1/Segment<T>", "System.Int32" });
			intptr_t* params = new intptr_t[4];
			params[0] = (intptr_t)head;
			params[1] = (intptr_t)&headHead;
			params[2] = (intptr_t)tail;
			params[3] = (intptr_t)&tailTail;
			Il2CppException* Il2CppException = nullptr;
			IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
			delete [] params;
			Il2CppExceptionMessage(Il2CppException);
			return (mscorlib::System::Collections::Generic::IEnumerator_1<T>*)returnValue;
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
		void EnqueueSlow(T* item)
		{
			static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "EnqueueSlow", std::vector<std::string> { GetGenericTypeName<T>() });
			intptr_t* params = new intptr_t[1];
			params[0] = (intptr_t)item;
			Il2CppException* Il2CppException = nullptr;
			il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
			delete [] params;
			Il2CppExceptionMessage(Il2CppException);
		}
		bool TryDequeue(T& result)
		{
			static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "TryDequeue", std::vector<std::string> { GetGenericTypeName<T>() + (std::string)"&" });
			intptr_t* params = new intptr_t[1];
			params[0] = (intptr_t)&result;
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
		bool TryDequeueSlow(T& item)
		{
			static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "TryDequeueSlow", std::vector<std::string> { GetGenericTypeName<T>() + (std::string)"&" });
			intptr_t* params = new intptr_t[1];
			params[0] = (intptr_t)&item;
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
	};
}

