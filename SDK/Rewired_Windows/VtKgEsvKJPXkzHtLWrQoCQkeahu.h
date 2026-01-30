#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
namespace Rewired_Windows { struct UFszbrouPHhjAZsfhrYqirKsuPI; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "bSWUbMLvBMVgnJBMqjyeDQzgJpxf.h"
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
#include "..\mscorlib\System_IntPtr.h"
namespace mscorlib::System { struct IntPtr; };
namespace mscorlib::System { struct String; };
#include "RSLeRDdyBKjDLeXomHVbvfpuXSu.h"
namespace Rewired_Windows { struct RSLeRDdyBKjDLeXomHVbvfpuXSu; };
#include "..\mscorlib\System_Reflection_MethodInfo.h"
namespace Rewired_Windows { struct xPtUWOCtzLolyJZgsZqVMFfSwcP; };
namespace Rewired_Windows { struct xPtUWOCtzLolyJZgsZqVMFfSwcP; };

namespace Rewired_Windows
{
	struct VtKgEsvKJPXkzHtLWrQoCQkeahu : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		Rewired_Windows::UFszbrouPHhjAZsfhrYqirKsuPI* KvlByXIEkIiFikugLcuArvpVKpF;
		int32_t OCZaRresRscsmmtHfEoteiBLnqwR;
		Rewired_Windows::bSWUbMLvBMVgnJBMqjyeDQzgJpxf uVTRuPyAfBzDQFEQnaPmAmwMlVb;
		Rewired_Windows::UFszbrouPHhjAZsfhrYqirKsuPI* get_Device();
		void set_Device(Rewired_Windows::UFszbrouPHhjAZsfhrYqirKsuPI* value);
		int32_t get_ObjectCode();
		void set_ObjectCode(int32_t value);
		Rewired_Windows::bSWUbMLvBMVgnJBMqjyeDQzgJpxf get_PropertyType();
		void set_PropertyType(Rewired_Windows::bSWUbMLvBMVgnJBMqjyeDQzgJpxf value);
		void _ctor(Rewired_Windows::UFszbrouPHhjAZsfhrYqirKsuPI* device, int32_t code, Rewired_Windows::bSWUbMLvBMVgnJBMqjyeDQzgJpxf propertyType);
		int32_t TagApgncObAEBJPTVLwLFQnFOKNq(intptr_t A_1);
		int32_t TagApgncObAEBJPTVLwLFQnFOKNq(intptr_t A_1, int32_t A_2);
		void hgXtredSOOVOTeNlnIHfmvvnEFlF(intptr_t A_1, int32_t A_2);
		mscorlib::System::String* XDTnJjfiujEMCgHyFnDInOApfzWk(intptr_t A_1);
		mscorlib::System::String* QPGbBSAGDsqHQYrOzHJpEuGJCFh(intptr_t A_1);
		mscorlib::System::String* QPGbBSAGDsqHQYrOzHJpEuGJCFh(intptr_t A_1, int32_t A_2);
		void hgXtredSOOVOTeNlnIHfmvvnEFlF(intptr_t A_1, Rewired_Windows::RSLeRDdyBKjDLeXomHVbvfpuXSu A_2);
		template <typename T> void WUGCGoNlmGZRuXTEKHawXbsMqZi(Rewired_Windows::xPtUWOCtzLolyJZgsZqVMFfSwcP& A_1)
		{
			static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "WUGCGoNlmGZRuXTEKHawXbsMqZi");
			mscorlib::System::Reflection::MethodInfo* method = (mscorlib::System::Reflection::MethodInfo*)il2cpp_method_get_object(address, GetIl2CppClass());
			IL2CPP::Array<mscorlib::System::Type*>* typeArguments = MakeArray<mscorlib::System::Type>(1);
			typeArguments->vector[0] = T::GetIl2CppType();
			const IL2CPP::Il2CppReflectionMethod* reflectionMethod = (const IL2CPP::Il2CppReflectionMethod*)method->MakeGenericMethod(typeArguments);
			const IL2CPP::MethodInfo* genericAddress = il2cpp_method_get_from_reflection(reflectionMethod);
			intptr_t* params = new intptr_t[1];
			params[0] = (intptr_t)&A_1;
			Il2CppException* Il2CppException = nullptr;
			il2cpp_runtime_invoke(genericAddress, this, (void**)params, &Il2CppException);
			delete [] params;
			Il2CppExceptionMessage(Il2CppException);
		}
	};
}

