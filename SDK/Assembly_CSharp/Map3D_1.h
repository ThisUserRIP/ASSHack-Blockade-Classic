#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
namespace Assembly_CSharp { template <typename I> struct Chunk3D_1; };
namespace Assembly_CSharp { template <typename T> struct List3D_1; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
#include "Vector3i.h"
namespace Assembly_CSharp { struct Vector3i; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };

namespace Assembly_CSharp
{
	template <typename I> struct Map3D_1 : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass()
		{
			IL2CPP::Array<mscorlib::System::Type*>* arrayType = new IL2CPP::Array<mscorlib::System::Type*>();
			arrayType->max_length = 1;
			arrayType->vector[0] = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(I::GetIl2CppClass()));
			intptr_t handle = ((intptr_t)il2cpp_class_get_type(GetIL2CppClass("Assembly-CSharp.dll", "", "Map3D`1")));
			const IL2CPP::Il2CppType* Il2CppType = (const IL2CPP::Il2CppType*)(mscorlib::System::Type::internal_from_handle(handle)->MakeGenericType(arrayType)->get_TypeHandle().value);
			IL2CPP::Il2CppClass* il2cppclass = il2cpp_class_from_type(Il2CppType);
			return il2cppclass;
		}
		static mscorlib::System::Type* GetIl2CppType()
		{
			static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
			return il2cpptype;
		}
		Assembly_CSharp::List3D_1<Assembly_CSharp::Chunk3D_1<I>>* chunks;
		I defaultValue;
		void _ctor()
		{
			static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor");
			Il2CppException* Il2CppException = nullptr;
			il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
			Il2CppExceptionMessage(Il2CppException);
		}
		void _ctor(I* defaultValue)
		{
			static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor", std::vector<std::string> { GetGenericTypeName<I>() });
			intptr_t* params = new intptr_t[1];
			params[0] = (intptr_t)defaultValue;
			Il2CppException* Il2CppException = nullptr;
			il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
			delete [] params;
			Il2CppExceptionMessage(Il2CppException);
		}
		void Set(I* val, Assembly_CSharp::Vector3i pos)
		{
			static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Set", std::vector<std::string> { GetGenericTypeName<I>(), "Vector3i" });
			intptr_t* params = new intptr_t[2];
			params[0] = (intptr_t)val;
			params[1] = (intptr_t)&pos;
			Il2CppException* Il2CppException = nullptr;
			il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
			delete [] params;
			Il2CppExceptionMessage(Il2CppException);
		}
		void Set(I* val, int32_t x, int32_t y, int32_t z)
		{
			static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Set", std::vector<std::string> { GetGenericTypeName<I>(), "System.Int32", "System.Int32", "System.Int32" });
			intptr_t* params = new intptr_t[4];
			params[0] = (intptr_t)val;
			params[1] = (intptr_t)&x;
			params[2] = (intptr_t)&y;
			params[3] = (intptr_t)&z;
			Il2CppException* Il2CppException = nullptr;
			il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
			delete [] params;
			Il2CppExceptionMessage(Il2CppException);
		}
		I* Get(Assembly_CSharp::Vector3i pos)
		{
			static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Get", std::vector<std::string> { "Vector3i" });
			intptr_t* params = new intptr_t[1];
			params[0] = (intptr_t)&pos;
			Il2CppException* Il2CppException = nullptr;
			IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
			delete [] params;
			Il2CppExceptionMessage(Il2CppException);
			return GetGenericValue<I>(returnValue);;
		}
		I* Get(int32_t x, int32_t y, int32_t z)
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
			return GetGenericValue<I>(returnValue);;
		}
		Assembly_CSharp::Chunk3D_1<I>* GetChunkInstance(Assembly_CSharp::Vector3i pos)
		{
			static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetChunkInstance", std::vector<std::string> { "Vector3i" });
			intptr_t* params = new intptr_t[1];
			params[0] = (intptr_t)&pos;
			Il2CppException* Il2CppException = nullptr;
			IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
			delete [] params;
			Il2CppExceptionMessage(Il2CppException);
			return (Assembly_CSharp::Chunk3D_1<I>*)returnValue;
		}
		Assembly_CSharp::Chunk3D_1<I>* GetChunkInstance(int32_t x, int32_t y, int32_t z)
		{
			static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetChunkInstance", std::vector<std::string> { "System.Int32", "System.Int32", "System.Int32" });
			intptr_t* params = new intptr_t[3];
			params[0] = (intptr_t)&x;
			params[1] = (intptr_t)&y;
			params[2] = (intptr_t)&z;
			Il2CppException* Il2CppException = nullptr;
			IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
			delete [] params;
			Il2CppExceptionMessage(Il2CppException);
			return (Assembly_CSharp::Chunk3D_1<I>*)returnValue;
		}
		Assembly_CSharp::Chunk3D_1<I>* GetChunk(Assembly_CSharp::Vector3i pos)
		{
			static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetChunk", std::vector<std::string> { "Vector3i" });
			intptr_t* params = new intptr_t[1];
			params[0] = (intptr_t)&pos;
			Il2CppException* Il2CppException = nullptr;
			IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
			delete [] params;
			Il2CppExceptionMessage(Il2CppException);
			return (Assembly_CSharp::Chunk3D_1<I>*)returnValue;
		}
		Assembly_CSharp::Chunk3D_1<I>* GetChunk(int32_t x, int32_t y, int32_t z)
		{
			static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetChunk", std::vector<std::string> { "System.Int32", "System.Int32", "System.Int32" });
			intptr_t* params = new intptr_t[3];
			params[0] = (intptr_t)&x;
			params[1] = (intptr_t)&y;
			params[2] = (intptr_t)&z;
			Il2CppException* Il2CppException = nullptr;
			IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
			delete [] params;
			Il2CppExceptionMessage(Il2CppException);
			return (Assembly_CSharp::Chunk3D_1<I>*)returnValue;
		}
	};
}

