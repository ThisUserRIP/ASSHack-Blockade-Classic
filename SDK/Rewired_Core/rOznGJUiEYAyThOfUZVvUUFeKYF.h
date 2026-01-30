#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
namespace Rewired_Core { struct rOznGJUiEYAyThOfUZVvUUFeKYF_JGCguQGKyNGsUPnvCaZBzHDiqlaa; };
namespace Rewired_Core::Rewired::Utils::Classes::Data { template <typename T> struct AList_1; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace Rewired_Core::Rewired { struct Controller; };
#include "..\mscorlib\System_Reflection_MethodInfo.h"
namespace mscorlib::System::Collections::Generic { template <typename T> struct IList_1; };

namespace Rewired_Core
{
	struct rOznGJUiEYAyThOfUZVvUUFeKYF : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		Rewired_Core::Rewired::Utils::Classes::Data::AList_1<Rewired_Core::rOznGJUiEYAyThOfUZVvUUFeKYF_JGCguQGKyNGsUPnvCaZBzHDiqlaa>* wCYZaVMGMfHPYEycCGTendpumCoK;
		IL2CPP::Array<mscorlib::System::Type*>* LObvXDxAvSMIKGgKxCVScNDAjAbT;
		IL2CPP::Array<mscorlib::System::Type*>* bsEQFLaVPJDeteatTMoeeYWVTLd;
		int32_t RrLcjOCELZyMBDptOvvPeumTEVx;
		void _ctor(IL2CPP::Array<mscorlib::System::Type*>* templateTypes, IL2CPP::Array<mscorlib::System::Type*>* interfaceTypes);
		void oxsIyNdnKmPEuPjlMNAWvtHbRpw(Rewired_Core::Rewired::Controller* A_1);
		void RFjeheRaaKLqbTVcykoPwmoxhvx(Rewired_Core::Rewired::Controller* A_1);
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
		Rewired_Core::rOznGJUiEYAyThOfUZVvUUFeKYF_JGCguQGKyNGsUPnvCaZBzHDiqlaa* nJsTBuMptufWgedxyHUJCczEkenO(mscorlib::System::Type* A_1);
		mscorlib::System::Type* AaRJoZUiLMcdZhHghEcGuSqXEKU(mscorlib::System::Type* A_1);
	};
}

