#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "rOznGJUiEYAyThOfUZVvUUFeKYF.h"
namespace Rewired_Core { struct rOznGJUiEYAyThOfUZVvUUFeKYF; };
namespace Rewired_Core::Rewired { struct IControllerTemplate; };
namespace Rewired_Core::Rewired::Utils::Classes::Data { template <typename T> struct AList_1; };
namespace mscorlib::System::Collections { struct IList; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
#include "..\mscorlib\System_Reflection_MethodInfo.h"
namespace mscorlib::System::Collections::Generic { template <typename T> struct IList_1; };

namespace Rewired_Core
{
	struct rOznGJUiEYAyThOfUZVvUUFeKYF_JGCguQGKyNGsUPnvCaZBzHDiqlaa : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		Rewired_Core::Rewired::Utils::Classes::Data::AList_1<Rewired_Core::Rewired::IControllerTemplate>* hfVlBBOujJiKjOMIWyIoWiQzeDD;
		mscorlib::System::Collections::IList* PELIELoQYqmHwwtmInndulCVHTHa;
		mscorlib::System::Collections::IList* gjHjqEbslOwLHyqqBnbvQeJXjWZ;
		mscorlib::System::Type* gPZxLtehLWSVXzAHRLMCniULExP;
		void _ctor(mscorlib::System::Type* type);
		template <typename T> mscorlib::System::Collections::Generic::IList_1<T>* ilLXQfsALcJWNCHvKEkuRqyzbZN()
		{
			static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ilLXQfsALcJWNCHvKEkuRqyzbZN");
			mscorlib::System::Reflection::MethodInfo* method = (mscorlib::System::Reflection::MethodInfo*)il2cpp_method_get_object(address, GetIl2CppClass());
			IL2CPP::Array<mscorlib::System::Type*>* typeArguments = MakeArray<mscorlib::System::Type>(1);
			typeArguments->vector[0] = T::GetIl2CppType();
			const IL2CPP::Il2CppReflectionMethod* reflectionMethod = (const IL2CPP::Il2CppReflectionMethod*)method->MakeGenericMethod(typeArguments);
			const IL2CPP::MethodInfo* genericAddress = il2cpp_method_get_from_reflection(reflectionMethod);
			Il2CppException* Il2CppException = nullptr;
			IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(genericAddress, this, nullptr, &Il2CppException);
			Il2CppExceptionMessage(Il2CppException);
			return (mscorlib::System::Collections::Generic::IList_1<T>*)returnValue;
		}
		void TyOKNaFypFPvOKjvYygxDFgYogG(Rewired_Core::Rewired::IControllerTemplate* A_1);
		void mgmAzwaMHeigujsOIbJqMYYsMaKQ(Rewired_Core::Rewired::IControllerTemplate* A_1);
		template <typename T> void lIfwnPFIoqBLIrnnHogRDMFammk()
		{
			static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "lIfwnPFIoqBLIrnnHogRDMFammk");
			mscorlib::System::Reflection::MethodInfo* method = (mscorlib::System::Reflection::MethodInfo*)il2cpp_method_get_object(address, GetIl2CppClass());
			IL2CPP::Array<mscorlib::System::Type*>* typeArguments = MakeArray<mscorlib::System::Type>(1);
			typeArguments->vector[0] = T::GetIl2CppType();
			const IL2CPP::Il2CppReflectionMethod* reflectionMethod = (const IL2CPP::Il2CppReflectionMethod*)method->MakeGenericMethod(typeArguments);
			const IL2CPP::MethodInfo* genericAddress = il2cpp_method_get_from_reflection(reflectionMethod);
			Il2CppException* Il2CppException = nullptr;
			il2cpp_runtime_invoke(genericAddress, this, nullptr, &Il2CppException);
			Il2CppExceptionMessage(Il2CppException);
		}
	};
}

