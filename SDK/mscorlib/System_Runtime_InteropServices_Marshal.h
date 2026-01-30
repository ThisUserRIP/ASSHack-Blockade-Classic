#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "System_IntPtr.h"
namespace mscorlib::System { struct IntPtr; };
#include "System_Void.h"
namespace mscorlib::System { struct Void; };
namespace mscorlib::System { struct Array; };
#include "System_Byte.h"
namespace mscorlib::System { struct Byte; };
#include "System_Char.h"
namespace mscorlib::System { struct Char; };
namespace mscorlib::System { struct Exception; };
namespace mscorlib::System { struct String; };
namespace mscorlib::System { struct Object; };
#include "..\mscorlib\System_Reflection_MethodInfo.h"
#include "System_Int16.h"
namespace mscorlib::System { struct Int16; };
#include "System_Int64.h"
namespace mscorlib::System { struct Int64; };
namespace mscorlib::System::Security { struct SecureString; };
#include "System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
namespace mscorlib::System { struct Delegate; };

namespace mscorlib::System::Runtime::InteropServices
{
	struct Marshal : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		struct StaticFields
		{
			int32_t SystemMaxDBCSCharSize;
			int32_t SystemDefaultCharSize;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		static intptr_t AllocCoTaskMem(int32_t cb);
		static intptr_t AllocHGlobal(intptr_t cb);
		static intptr_t AllocHGlobal(int32_t cb);
		static void copy_to_unmanaged(mscorlib::System::Array* source, int32_t startIndex, intptr_t destination, int32_t length);
		static void copy_from_unmanaged(intptr_t source, int32_t startIndex, mscorlib::System::Array* destination, int32_t length);
		static void Copy(IL2CPP::Array<uint8_t>* source, int32_t startIndex, intptr_t destination, int32_t length);
		static void Copy(intptr_t source, IL2CPP::Array<uint8_t>* destination, int32_t startIndex, int32_t length);
		static void Copy(intptr_t source, IL2CPP::Array<wchar_t>* destination, int32_t startIndex, int32_t length);
		static void FreeBSTR(intptr_t ptr);
		static void FreeHGlobal(intptr_t hglobal);
		static void ClearUnicode(intptr_t ptr);
		static void ZeroFreeGlobalAllocUnicode(intptr_t s);
		static int32_t GetHRForException(mscorlib::System::Exception* e);
		static int32_t GetLastWin32Error();
		static intptr_t OffsetOf(mscorlib::System::Type* t, mscorlib::System::String* fieldName);
		static mscorlib::System::String* PtrToStringAnsi(intptr_t ptr);
		static mscorlib::System::String* PtrToStringUni(intptr_t ptr);
		static mscorlib::System::String* PtrToStringUni(intptr_t ptr, int32_t len);
		static mscorlib::System::String* PtrToStringBSTR(intptr_t ptr);
		static mscorlib::System::Object* PtrToStructure(intptr_t ptr, mscorlib::System::Type* structureType);
		template <typename T> static T* PtrToStructure(intptr_t ptr)
		{
			static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "PtrToStructure", std::vector<std::string> { "System.IntPtr" });
			mscorlib::System::Reflection::MethodInfo* method = (mscorlib::System::Reflection::MethodInfo*)il2cpp_method_get_object(address, GetIl2CppClass());
			IL2CPP::Array<mscorlib::System::Type*>* typeArguments = MakeArray<mscorlib::System::Type>(1);
			typeArguments->vector[0] = T::GetIl2CppType();
			const IL2CPP::Il2CppReflectionMethod* reflectionMethod = (const IL2CPP::Il2CppReflectionMethod*)method->MakeGenericMethod(typeArguments);
			const IL2CPP::MethodInfo* genericAddress = il2cpp_method_get_from_reflection(reflectionMethod);
			intptr_t* params = new intptr_t[1];
			params[0] = (intptr_t)&ptr;
			Il2CppException* Il2CppException = nullptr;
			IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(genericAddress, nullptr, (void**)params, &Il2CppException);
			delete [] params;
			Il2CppExceptionMessage(Il2CppException);
			return GetGenericValue<T>(returnValue);;
		}
		static uint8_t ReadByte(intptr_t ptr, int32_t ofs);
		static int16_t ReadInt16(intptr_t ptr, int32_t ofs);
		static int32_t ReadInt32(intptr_t ptr);
		static int32_t ReadInt32(intptr_t ptr, int32_t ofs);
		static int64_t ReadInt64(intptr_t ptr);
		static int64_t ReadInt64(intptr_t ptr, int32_t ofs);
		static intptr_t ReadIntPtr(intptr_t ptr);
		static int32_t ReleaseInternal(intptr_t pUnk);
		static int32_t Release(intptr_t pUnk);
		static int32_t SizeOf(mscorlib::System::Object* structure);
		static int32_t SizeOf(mscorlib::System::Type* t);
		template <typename T> static int32_t SizeOf()
		{
			static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "SizeOf");
			mscorlib::System::Reflection::MethodInfo* method = (mscorlib::System::Reflection::MethodInfo*)il2cpp_method_get_object(address, GetIl2CppClass());
			IL2CPP::Array<mscorlib::System::Type*>* typeArguments = MakeArray<mscorlib::System::Type>(1);
			typeArguments->vector[0] = T::GetIl2CppType();
			const IL2CPP::Il2CppReflectionMethod* reflectionMethod = (const IL2CPP::Il2CppReflectionMethod*)method->MakeGenericMethod(typeArguments);
			const IL2CPP::MethodInfo* genericAddress = il2cpp_method_get_from_reflection(reflectionMethod);
			Il2CppException* Il2CppException = nullptr;
			IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(genericAddress, nullptr, nullptr, &Il2CppException);
			Il2CppExceptionMessage(Il2CppException);
			if (returnValue == nullptr)
			{
				int32_t ret;
				std::memset(&ret, 0, sizeof(int32_t));
				return ret;
			}
			return static_cast<int32_t>(*(int32_t*)il2cpp_object_unbox(returnValue));
		}
		static intptr_t StringToBSTR(mscorlib::System::String* s);
		static intptr_t SecureStringToCoTaskMemUnicode(mscorlib::System::Security::SecureString* s);
		static intptr_t SecureStringToGlobalAllocUnicode(mscorlib::System::Security::SecureString* s);
		static void StructureToPtr(mscorlib::System::Object* structure, intptr_t ptr, bool fDeleteOld);
		template <typename T> static void StructureToPtr(T* structure, intptr_t ptr, bool fDeleteOld)
		{
			static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "StructureToPtr", std::vector<std::string> { GetGenericTypeName<T>(), "System.IntPtr", "System.Boolean" });
			mscorlib::System::Reflection::MethodInfo* method = (mscorlib::System::Reflection::MethodInfo*)il2cpp_method_get_object(address, GetIl2CppClass());
			IL2CPP::Array<mscorlib::System::Type*>* typeArguments = MakeArray<mscorlib::System::Type>(1);
			typeArguments->vector[0] = T::GetIl2CppType();
			const IL2CPP::Il2CppReflectionMethod* reflectionMethod = (const IL2CPP::Il2CppReflectionMethod*)method->MakeGenericMethod(typeArguments);
			const IL2CPP::MethodInfo* genericAddress = il2cpp_method_get_from_reflection(reflectionMethod);
			intptr_t* params = new intptr_t[3];
			params[0] = (intptr_t)structure;
			params[1] = (intptr_t)&ptr;
			params[2] = (intptr_t)&fDeleteOld;
			Il2CppException* Il2CppException = nullptr;
			il2cpp_runtime_invoke(genericAddress, nullptr, (void**)params, &Il2CppException);
			delete [] params;
			Il2CppExceptionMessage(Il2CppException);
		}
		static intptr_t UnsafeAddrOfPinnedArrayElement(mscorlib::System::Array* arr, int32_t index);
		template <typename T> static intptr_t UnsafeAddrOfPinnedArrayElement(IL2CPP::Array<T>* arr, int32_t index)
		{
			static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "UnsafeAddrOfPinnedArrayElement", std::vector<std::string> { GetGenericTypeName<T>() + (std::string)"[]", "System.Int32" });
			mscorlib::System::Reflection::MethodInfo* method = (mscorlib::System::Reflection::MethodInfo*)il2cpp_method_get_object(address, GetIl2CppClass());
			IL2CPP::Array<mscorlib::System::Type*>* typeArguments = MakeArray<mscorlib::System::Type>(1);
			typeArguments->vector[0] = T::GetIl2CppType();
			const IL2CPP::Il2CppReflectionMethod* reflectionMethod = (const IL2CPP::Il2CppReflectionMethod*)method->MakeGenericMethod(typeArguments);
			const IL2CPP::MethodInfo* genericAddress = il2cpp_method_get_from_reflection(reflectionMethod);
			intptr_t* params = new intptr_t[2];
			params[0] = (intptr_t)arr;
			params[1] = (intptr_t)&index;
			Il2CppException* Il2CppException = nullptr;
			IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(genericAddress, nullptr, (void**)params, &Il2CppException);
			delete [] params;
			Il2CppExceptionMessage(Il2CppException);
			if (returnValue == nullptr)
			{
				intptr_t ret;
				std::memset(&ret, 0, sizeof(intptr_t));
				return ret;
			}
			return static_cast<intptr_t>(*(intptr_t*)il2cpp_object_unbox(returnValue));
		}
		static void WriteByte(intptr_t ptr, uint8_t val);
		static void WriteByte(intptr_t ptr, int32_t ofs, uint8_t val);
		static void WriteInt16(intptr_t ptr, int32_t ofs, int16_t val);
		static void WriteInt32(intptr_t ptr, int32_t ofs, int32_t val);
		static void WriteInt64(intptr_t ptr, int32_t ofs, int64_t val);
		static intptr_t GetFunctionPointerForDelegateInternal(mscorlib::System::Delegate* d);
		static intptr_t GetFunctionPointerForDelegate(mscorlib::System::Delegate* d);
		template <typename TDelegate> static intptr_t GetFunctionPointerForDelegate(TDelegate* d)
		{
			static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetFunctionPointerForDelegate", std::vector<std::string> { GetGenericTypeName<TDelegate>() });
			mscorlib::System::Reflection::MethodInfo* method = (mscorlib::System::Reflection::MethodInfo*)il2cpp_method_get_object(address, GetIl2CppClass());
			IL2CPP::Array<mscorlib::System::Type*>* typeArguments = MakeArray<mscorlib::System::Type>(1);
			typeArguments->vector[0] = TDelegate::GetIl2CppType();
			const IL2CPP::Il2CppReflectionMethod* reflectionMethod = (const IL2CPP::Il2CppReflectionMethod*)method->MakeGenericMethod(typeArguments);
			const IL2CPP::MethodInfo* genericAddress = il2cpp_method_get_from_reflection(reflectionMethod);
			intptr_t* params = new intptr_t[1];
			params[0] = (intptr_t)d;
			Il2CppException* Il2CppException = nullptr;
			IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(genericAddress, nullptr, (void**)params, &Il2CppException);
			delete [] params;
			Il2CppExceptionMessage(Il2CppException);
			if (returnValue == nullptr)
			{
				intptr_t ret;
				std::memset(&ret, 0, sizeof(intptr_t));
				return ret;
			}
			return static_cast<intptr_t>(*(intptr_t*)il2cpp_object_unbox(returnValue));
		}
		static void _cctor();
	};
}

