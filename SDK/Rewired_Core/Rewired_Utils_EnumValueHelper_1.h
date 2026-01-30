#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
namespace Rewired_Core::Rewired::Utils { template <typename TEnum> struct EnumValueHelper_1; };
namespace mscorlib::System::Collections::ObjectModel { template <typename T> struct ReadOnlyCollection_1; };
namespace mscorlib::System { struct String; };
namespace mscorlib::System::Collections::Generic { template <typename T> struct IList_1; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };

namespace Rewired_Core::Rewired::Utils
{
	template <typename TEnum> struct EnumValueHelper_1 : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass()
		{
			IL2CPP::Array<mscorlib::System::Type*>* arrayType = new IL2CPP::Array<mscorlib::System::Type*>();
			arrayType->max_length = 1;
			arrayType->vector[0] = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(TEnum::GetIl2CppClass()));
			intptr_t handle = ((intptr_t)il2cpp_class_get_type(GetIL2CppClass("Rewired_Core.dll", "Rewired.Utils", "EnumValueHelper`1")));
			const IL2CPP::Il2CppType* Il2CppType = (const IL2CPP::Il2CppType*)(mscorlib::System::Type::internal_from_handle(handle)->MakeGenericType(arrayType)->get_TypeHandle().value);
			IL2CPP::Il2CppClass* il2cppclass = il2cpp_class_from_type(Il2CppType);
			return il2cppclass;
		}
		static mscorlib::System::Type* GetIl2CppType()
		{
			static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
			return il2cpptype;
		}
		IL2CPP::Array<TEnum>* HmMZuYamiDdQPEyupwwMijZGTwb;
		mscorlib::System::Collections::ObjectModel::ReadOnlyCollection_1<TEnum>* vGrBEVNdGUrbBBgRHAhnewKUPnf;
		IL2CPP::Array<mscorlib::System::String*>* pWTDkjoscpmdvuOIuQPGsQmlocp;
		mscorlib::System::Collections::ObjectModel::ReadOnlyCollection_1<mscorlib::System::String>* nOjBvUtqhwoRbfqNomnfSoeSaGT;
		struct StaticFields
		{
			Rewired_Core::Rewired::Utils::EnumValueHelper_1<TEnum>* osuowjGAEXihMLbjXEAemmMAXTO;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		static Rewired_Core::Rewired::Utils::EnumValueHelper_1<TEnum>* get_Default()
		{
			static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_Default");
			Il2CppException* Il2CppException = nullptr;
			IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, nullptr, &Il2CppException);
			Il2CppExceptionMessage(Il2CppException);
			return (Rewired_Core::Rewired::Utils::EnumValueHelper_1<TEnum>*)returnValue;
		}
		mscorlib::System::Collections::Generic::IList_1<TEnum>* get_values()
		{
			static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_values");
			Il2CppException* Il2CppException = nullptr;
			IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
			Il2CppExceptionMessage(Il2CppException);
			return (mscorlib::System::Collections::Generic::IList_1<TEnum>*)returnValue;
		}
		mscorlib::System::Collections::Generic::IList_1<mscorlib::System::String>* get_names()
		{
			static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_names");
			Il2CppException* Il2CppException = nullptr;
			IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
			Il2CppExceptionMessage(Il2CppException);
			return (mscorlib::System::Collections::Generic::IList_1<mscorlib::System::String>*)returnValue;
		}
		void _ctor()
		{
			static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor");
			Il2CppException* Il2CppException = nullptr;
			il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
			Il2CppExceptionMessage(Il2CppException);
		}
	};
}

