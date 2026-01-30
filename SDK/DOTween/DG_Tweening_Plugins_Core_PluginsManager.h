#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
namespace DOTween::DG::Tweening::Plugins::Core { struct ITweenPlugin; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
namespace mscorlib::System::Collections::Generic { template <typename TKey, typename TValue> struct Dictionary_2; };
#include "..\mscorlib\System_Reflection_MethodInfo.h"
namespace DOTween::DG::Tweening::Plugins::Core { template <typename T1, typename T2, typename TPlugOptions> struct ABSTweenPlugin_3; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };

namespace DOTween::DG::Tweening::Plugins::Core
{
	struct PluginsManager : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		struct StaticFields
		{
			DOTween::DG::Tweening::Plugins::Core::ITweenPlugin* _floatPlugin;
			DOTween::DG::Tweening::Plugins::Core::ITweenPlugin* _doublePlugin;
			DOTween::DG::Tweening::Plugins::Core::ITweenPlugin* _intPlugin;
			DOTween::DG::Tweening::Plugins::Core::ITweenPlugin* _uintPlugin;
			DOTween::DG::Tweening::Plugins::Core::ITweenPlugin* _longPlugin;
			DOTween::DG::Tweening::Plugins::Core::ITweenPlugin* _ulongPlugin;
			DOTween::DG::Tweening::Plugins::Core::ITweenPlugin* _vector2Plugin;
			DOTween::DG::Tweening::Plugins::Core::ITweenPlugin* _vector3Plugin;
			DOTween::DG::Tweening::Plugins::Core::ITweenPlugin* _vector4Plugin;
			DOTween::DG::Tweening::Plugins::Core::ITweenPlugin* _quaternionPlugin;
			DOTween::DG::Tweening::Plugins::Core::ITweenPlugin* _colorPlugin;
			DOTween::DG::Tweening::Plugins::Core::ITweenPlugin* _rectPlugin;
			DOTween::DG::Tweening::Plugins::Core::ITweenPlugin* _rectOffsetPlugin;
			DOTween::DG::Tweening::Plugins::Core::ITweenPlugin* _stringPlugin;
			DOTween::DG::Tweening::Plugins::Core::ITweenPlugin* _vector3ArrayPlugin;
			DOTween::DG::Tweening::Plugins::Core::ITweenPlugin* _color2Plugin;
			int32_t _MaxCustomPlugins;
			mscorlib::System::Collections::Generic::Dictionary_2<mscorlib::System::Type, DOTween::DG::Tweening::Plugins::Core::ITweenPlugin>* _customPlugins;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		template <typename T1, typename T2, typename TPlugOptions> static DOTween::DG::Tweening::Plugins::Core::ABSTweenPlugin_3<T1, T2, TPlugOptions>* GetDefaultPlugin()
		{
			static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetDefaultPlugin");
			mscorlib::System::Reflection::MethodInfo* method = (mscorlib::System::Reflection::MethodInfo*)il2cpp_method_get_object(address, GetIl2CppClass());
			IL2CPP::Array<mscorlib::System::Type*>* typeArguments = MakeArray<mscorlib::System::Type>(3);
			typeArguments->vector[0] = T1::GetIl2CppType();
			typeArguments->vector[1] = T2::GetIl2CppType();
			typeArguments->vector[2] = TPlugOptions::GetIl2CppType();
			const IL2CPP::Il2CppReflectionMethod* reflectionMethod = (const IL2CPP::Il2CppReflectionMethod*)method->MakeGenericMethod(typeArguments);
			const IL2CPP::MethodInfo* genericAddress = il2cpp_method_get_from_reflection(reflectionMethod);
			Il2CppException* Il2CppException = nullptr;
			IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(genericAddress, nullptr, nullptr, &Il2CppException);
			Il2CppExceptionMessage(Il2CppException);
			return (DOTween::DG::Tweening::Plugins::Core::ABSTweenPlugin_3<T1, T2, TPlugOptions>*)returnValue;
		}
		template <typename TPlugin, typename T1, typename T2, typename TPlugOptions> static DOTween::DG::Tweening::Plugins::Core::ABSTweenPlugin_3<T1, T2, TPlugOptions>* GetCustomPlugin()
		{
			static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetCustomPlugin");
			mscorlib::System::Reflection::MethodInfo* method = (mscorlib::System::Reflection::MethodInfo*)il2cpp_method_get_object(address, GetIl2CppClass());
			IL2CPP::Array<mscorlib::System::Type*>* typeArguments = MakeArray<mscorlib::System::Type>(4);
			typeArguments->vector[0] = TPlugin::GetIl2CppType();
			typeArguments->vector[1] = T1::GetIl2CppType();
			typeArguments->vector[2] = T2::GetIl2CppType();
			typeArguments->vector[3] = TPlugOptions::GetIl2CppType();
			const IL2CPP::Il2CppReflectionMethod* reflectionMethod = (const IL2CPP::Il2CppReflectionMethod*)method->MakeGenericMethod(typeArguments);
			const IL2CPP::MethodInfo* genericAddress = il2cpp_method_get_from_reflection(reflectionMethod);
			Il2CppException* Il2CppException = nullptr;
			IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(genericAddress, nullptr, nullptr, &Il2CppException);
			Il2CppExceptionMessage(Il2CppException);
			return (DOTween::DG::Tweening::Plugins::Core::ABSTweenPlugin_3<T1, T2, TPlugOptions>*)returnValue;
		}
		static void PurgeAll();
	};
}

