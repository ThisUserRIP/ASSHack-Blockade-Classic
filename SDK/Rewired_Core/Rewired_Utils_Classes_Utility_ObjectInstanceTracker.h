#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "..\mscorlib\System_UInt32.h"
namespace mscorlib::System { struct UInt32; };
namespace mscorlib::System { struct Object; };
namespace mscorlib::System::Collections::Generic { template <typename TKey, typename TValue> struct Dictionary_2; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
#include "..\mscorlib\System_Reflection_MethodInfo.h"

namespace Rewired_Core::Rewired::Utils::Classes::Utility
{
	struct ObjectInstanceTracker : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		mscorlib::System::Collections::Generic::Dictionary_2<mscorlib::System::UInt32, mscorlib::System::Object>* wCYZaVMGMfHPYEycCGTendpumCoK;
		mscorlib::System::Object* doJSpGmqrcpsvTVdYNWiPcYvDGB;
		uint32_t oqKicmvQcZiflojRyXgoicWzDTPA;
		int32_t WXtBAchjruJMRTmqezJcdttBwFO;
		bool ZUatMMuqcsuPJkipBsehqdCIkKK;
		struct StaticFields
		{
			Rewired_Core::Rewired::Utils::Classes::Utility::ObjectInstanceTracker* osuowjGAEXihMLbjXEAemmMAXTO;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		static Rewired_Core::Rewired::Utils::Classes::Utility::ObjectInstanceTracker* get_Default();
		uint32_t Register(mscorlib::System::Object* instance);
		void Unregister(uint32_t instanceId);
		template <typename T> bool TryGetInstance(uint32_t instanceId, T& instance)
		{
			static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "TryGetInstance", std::vector<std::string> { "System.UInt32", GetGenericTypeName<T>() + (std::string)"&" });
			mscorlib::System::Reflection::MethodInfo* method = (mscorlib::System::Reflection::MethodInfo*)il2cpp_method_get_object(address, GetIl2CppClass());
			IL2CPP::Array<mscorlib::System::Type*>* typeArguments = MakeArray<mscorlib::System::Type>(1);
			typeArguments->vector[0] = T::GetIl2CppType();
			const IL2CPP::Il2CppReflectionMethod* reflectionMethod = (const IL2CPP::Il2CppReflectionMethod*)method->MakeGenericMethod(typeArguments);
			const IL2CPP::MethodInfo* genericAddress = il2cpp_method_get_from_reflection(reflectionMethod);
			intptr_t* params = new intptr_t[2];
			params[0] = (intptr_t)&instanceId;
			params[1] = (intptr_t)&instance;
			Il2CppException* Il2CppException = nullptr;
			IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(genericAddress, this, (void**)params, &Il2CppException);
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
		void Dispose();
		void snZhCwQAgWjYPcOgscQYoAtKPcNi(bool A_1);
		void Finalize();
		void _ctor();
	};
}

