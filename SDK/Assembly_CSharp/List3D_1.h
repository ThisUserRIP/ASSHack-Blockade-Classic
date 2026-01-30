#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "Vector3i.h"
namespace Assembly_CSharp { struct Vector3i; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };

namespace Assembly_CSharp
{
	template <typename T> struct List3D_1 : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass()
		{
			IL2CPP::Array<mscorlib::System::Type*>* arrayType = new IL2CPP::Array<mscorlib::System::Type*>();
			arrayType->max_length = 1;
			arrayType->vector[0] = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(T::GetIl2CppClass()));
			intptr_t handle = ((intptr_t)il2cpp_class_get_type(GetIL2CppClass("Assembly-CSharp.dll", "", "List3D`1")));
			const IL2CPP::Il2CppType* Il2CppType = (const IL2CPP::Il2CppType*)(mscorlib::System::Type::internal_from_handle(handle)->MakeGenericType(arrayType)->get_TypeHandle().value);
			IL2CPP::Il2CppClass* il2cppclass = il2cpp_class_from_type(Il2CppType);
			return il2cppclass;
		}
		static mscorlib::System::Type* GetIl2CppType()
		{
			static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
			return il2cpptype;
		}
		IL2CPP::Array<T>* list;
		Assembly_CSharp::Vector3i min;
		Assembly_CSharp::Vector3i max;
		void _ctor()
		{
			static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor");
			Il2CppException* Il2CppException = nullptr;
			il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
			Il2CppExceptionMessage(Il2CppException);
		}
		void _ctor(Assembly_CSharp::Vector3i min, Assembly_CSharp::Vector3i max)
		{
			static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor", std::vector<std::string> { "Vector3i", "Vector3i" });
			intptr_t* params = new intptr_t[2];
			params[0] = (intptr_t)&min;
			params[1] = (intptr_t)&max;
			Il2CppException* Il2CppException = nullptr;
			il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
			delete [] params;
			Il2CppExceptionMessage(Il2CppException);
		}
		void Set(T* obj, Assembly_CSharp::Vector3i pos)
		{
			static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Set", std::vector<std::string> { GetGenericTypeName<T>(), "Vector3i" });
			intptr_t* params = new intptr_t[2];
			params[0] = (intptr_t)obj;
			params[1] = (intptr_t)&pos;
			Il2CppException* Il2CppException = nullptr;
			il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
			delete [] params;
			Il2CppExceptionMessage(Il2CppException);
		}
		void Set(T* obj, int32_t x, int32_t y, int32_t z)
		{
			static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Set", std::vector<std::string> { GetGenericTypeName<T>(), "System.Int32", "System.Int32", "System.Int32" });
			intptr_t* params = new intptr_t[4];
			params[0] = (intptr_t)obj;
			params[1] = (intptr_t)&x;
			params[2] = (intptr_t)&y;
			params[3] = (intptr_t)&z;
			Il2CppException* Il2CppException = nullptr;
			il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
			delete [] params;
			Il2CppExceptionMessage(Il2CppException);
		}
		T* GetInstance(Assembly_CSharp::Vector3i pos)
		{
			static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetInstance", std::vector<std::string> { "Vector3i" });
			intptr_t* params = new intptr_t[1];
			params[0] = (intptr_t)&pos;
			Il2CppException* Il2CppException = nullptr;
			IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
			delete [] params;
			Il2CppExceptionMessage(Il2CppException);
			return GetGenericValue<T>(returnValue);;
		}
		T* GetInstance(int32_t x, int32_t y, int32_t z)
		{
			static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetInstance", std::vector<std::string> { "System.Int32", "System.Int32", "System.Int32" });
			intptr_t* params = new intptr_t[3];
			params[0] = (intptr_t)&x;
			params[1] = (intptr_t)&y;
			params[2] = (intptr_t)&z;
			Il2CppException* Il2CppException = nullptr;
			IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
			delete [] params;
			Il2CppExceptionMessage(Il2CppException);
			return GetGenericValue<T>(returnValue);;
		}
		T* Get(Assembly_CSharp::Vector3i pos)
		{
			static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Get", std::vector<std::string> { "Vector3i" });
			intptr_t* params = new intptr_t[1];
			params[0] = (intptr_t)&pos;
			Il2CppException* Il2CppException = nullptr;
			IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
			delete [] params;
			Il2CppExceptionMessage(Il2CppException);
			return GetGenericValue<T>(returnValue);;
		}
		T* Get(int32_t x, int32_t y, int32_t z)
		{
			static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Get", std::vector<std::string> { "System.Int32", "System.Int32", "System.Int32" });
			intptr_t* params = new intptr_t[3];
			params[0] = (intptr_t)&x;
			params[1] = (intptr_t)&y;
			params[2] = (intptr_t)&z;
			Il2CppException* Il2CppException = nullptr;
			IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
			delete [] params;
			Il2CppExceptionMessage(Il2CppException);
			return GetGenericValue<T>(returnValue);;
		}
		T* SafeGet(Assembly_CSharp::Vector3i pos)
		{
			static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "SafeGet", std::vector<std::string> { "Vector3i" });
			intptr_t* params = new intptr_t[1];
			params[0] = (intptr_t)&pos;
			Il2CppException* Il2CppException = nullptr;
			IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
			delete [] params;
			Il2CppExceptionMessage(Il2CppException);
			return GetGenericValue<T>(returnValue);;
		}
		T* SafeGet(int32_t x, int32_t y, int32_t z)
		{
			static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "SafeGet", std::vector<std::string> { "System.Int32", "System.Int32", "System.Int32" });
			intptr_t* params = new intptr_t[3];
			params[0] = (intptr_t)&x;
			params[1] = (intptr_t)&y;
			params[2] = (intptr_t)&z;
			Il2CppException* Il2CppException = nullptr;
			IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
			delete [] params;
			Il2CppExceptionMessage(Il2CppException);
			return GetGenericValue<T>(returnValue);;
		}
		void AddOrReplace(T* obj, Assembly_CSharp::Vector3i pos)
		{
			static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "AddOrReplace", std::vector<std::string> { GetGenericTypeName<T>(), "Vector3i" });
			intptr_t* params = new intptr_t[2];
			params[0] = (intptr_t)obj;
			params[1] = (intptr_t)&pos;
			Il2CppException* Il2CppException = nullptr;
			il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
			delete [] params;
			Il2CppExceptionMessage(Il2CppException);
		}
		void AddOrReplace(T* obj, int32_t x, int32_t y, int32_t z)
		{
			static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "AddOrReplace", std::vector<std::string> { GetGenericTypeName<T>(), "System.Int32", "System.Int32", "System.Int32" });
			intptr_t* params = new intptr_t[4];
			params[0] = (intptr_t)obj;
			params[1] = (intptr_t)&x;
			params[2] = (intptr_t)&y;
			params[3] = (intptr_t)&z;
			Il2CppException* Il2CppException = nullptr;
			il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
			delete [] params;
			Il2CppExceptionMessage(Il2CppException);
		}
		void Resize(Assembly_CSharp::Vector3i newMin, Assembly_CSharp::Vector3i newMax)
		{
			static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Resize", std::vector<std::string> { "Vector3i", "Vector3i" });
			intptr_t* params = new intptr_t[2];
			params[0] = (intptr_t)&newMin;
			params[1] = (intptr_t)&newMax;
			Il2CppException* Il2CppException = nullptr;
			il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
			delete [] params;
			Il2CppExceptionMessage(Il2CppException);
		}
		bool IsCorrectIndex(Assembly_CSharp::Vector3i pos)
		{
			static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "IsCorrectIndex", std::vector<std::string> { "Vector3i" });
			intptr_t* params = new intptr_t[1];
			params[0] = (intptr_t)&pos;
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
		bool IsCorrectIndex(int32_t x, int32_t y, int32_t z)
		{
			static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "IsCorrectIndex", std::vector<std::string> { "System.Int32", "System.Int32", "System.Int32" });
			intptr_t* params = new intptr_t[3];
			params[0] = (intptr_t)&x;
			params[1] = (intptr_t)&y;
			params[2] = (intptr_t)&z;
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
		Assembly_CSharp::Vector3i GetMin()
		{
			static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetMin");
			Il2CppException* Il2CppException = nullptr;
			IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
			Il2CppExceptionMessage(Il2CppException);
			if (returnValue == nullptr)
			{
				Assembly_CSharp::Vector3i ret;
				std::memset(&ret, 0, sizeof(Assembly_CSharp::Vector3i));
				return ret;
			}
			return static_cast<Assembly_CSharp::Vector3i>(*(Assembly_CSharp::Vector3i*)il2cpp_object_unbox(returnValue));
		}
		Assembly_CSharp::Vector3i GetMax()
		{
			static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetMax");
			Il2CppException* Il2CppException = nullptr;
			IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
			Il2CppExceptionMessage(Il2CppException);
			if (returnValue == nullptr)
			{
				Assembly_CSharp::Vector3i ret;
				std::memset(&ret, 0, sizeof(Assembly_CSharp::Vector3i));
				return ret;
			}
			return static_cast<Assembly_CSharp::Vector3i>(*(Assembly_CSharp::Vector3i*)il2cpp_object_unbox(returnValue));
		}
		Assembly_CSharp::Vector3i GetSize()
		{
			static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetSize");
			Il2CppException* Il2CppException = nullptr;
			IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
			Il2CppExceptionMessage(Il2CppException);
			if (returnValue == nullptr)
			{
				Assembly_CSharp::Vector3i ret;
				std::memset(&ret, 0, sizeof(Assembly_CSharp::Vector3i));
				return ret;
			}
			return static_cast<Assembly_CSharp::Vector3i>(*(Assembly_CSharp::Vector3i*)il2cpp_object_unbox(returnValue));
		}
		int32_t GetMinX()
		{
			static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetMinX");
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
		int32_t GetMinY()
		{
			static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetMinY");
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
		int32_t GetMinZ()
		{
			static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetMinZ");
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
		int32_t GetMaxX()
		{
			static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetMaxX");
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
		int32_t GetMaxY()
		{
			static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetMaxY");
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
		int32_t GetMaxZ()
		{
			static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetMaxZ");
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
	};
}

