#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "Rewired_Data_UserData_flytnLnoCniIqtWdCAvNyFuEZRb.h"
namespace Rewired_Core::Rewired::Data { struct UserData_flytnLnoCniIqtWdCAvNyFuEZRb; };
#include "Rewired_Data_UserData_flytnLnoCniIqtWdCAvNyFuEZRb_NfEPiZFXKzdLlnFyggERscZwHKj_yRvRAzTzBlGTvzVzvHQfBIsZWaF.h"
namespace mscorlib::System::Collections::Generic { template <typename T> struct IList_1; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };

namespace Rewired_Core::Rewired::Data
{
	template <typename T> struct UserData_flytnLnoCniIqtWdCAvNyFuEZRb_VFBcBlhTTdGdgGYuSWdcKgYlura : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass()
		{
			IL2CPP::Array<mscorlib::System::Type*>* arrayType = new IL2CPP::Array<mscorlib::System::Type*>();
			arrayType->max_length = 1;
			arrayType->vector[0] = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(T::GetIl2CppClass()));
			intptr_t handle = ((intptr_t)il2cpp_class_get_type(GetIl2CppNestedType(Rewired_Core::Rewired::Data::UserData_flytnLnoCniIqtWdCAvNyFuEZRb::GetIl2CppClass(), "VFBcBlhTTdGdgGYuSWdcKgYlura")));
			const IL2CPP::Il2CppType* Il2CppType = (const IL2CPP::Il2CppType*)(mscorlib::System::Type::internal_from_handle(handle)->MakeGenericType(arrayType)->get_TypeHandle().value);
			IL2CPP::Il2CppClass* il2cppclass = il2cpp_class_from_type(Il2CppType);
			return il2cppclass;
		}
		static mscorlib::System::Type* GetIl2CppType()
		{
			static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
			return il2cpptype;
		}
		T AukvEmarDapRrgreOGhxglferqx;
		T LPdJCyoUNCusUkEeKdCPrDEcMWR;
		Rewired_Core::Rewired::Data::UserData_flytnLnoCniIqtWdCAvNyFuEZRb_NfEPiZFXKzdLlnFyggERscZwHKj_yRvRAzTzBlGTvzVzvHQfBIsZWaF UhzHBCwRKEItweigxqRcGBuJKhIk;
		mscorlib::System::Collections::Generic::IList_1<T>* tWuTLNRDCGwOuDWLaOEkyMarIfw;
		bool cxTRpGWbAoBEclPkpoeJceKAoTr;
		void _ctor(T* otherItem, T* finalItem, Rewired_Core::Rewired::Data::UserData_flytnLnoCniIqtWdCAvNyFuEZRb_NfEPiZFXKzdLlnFyggERscZwHKj_yRvRAzTzBlGTvzVzvHQfBIsZWaF idType, mscorlib::System::Collections::Generic::IList_1<T>* finalItems, bool isCollision)
		{
			static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor", std::vector<std::string> { GetGenericTypeName<T>(), GetGenericTypeName<T>(), "Rewired.Data.UserData/flytnLnoCniIqtWdCAvNyFuEZRb/NfEPiZFXKzdLlnFyggERscZwHKj/yRvRAzTzBlGTvzVzvHQfBIsZWaF", "System.Collections.Generic.IList`1<T>", "System.Boolean" });
			intptr_t* params = new intptr_t[5];
			params[0] = (intptr_t)otherItem;
			params[1] = (intptr_t)finalItem;
			params[2] = (intptr_t)&idType;
			params[3] = (intptr_t)finalItems;
			params[4] = (intptr_t)&isCollision;
			Il2CppException* Il2CppException = nullptr;
			il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
			delete [] params;
			Il2CppExceptionMessage(Il2CppException);
		}
	};
}

