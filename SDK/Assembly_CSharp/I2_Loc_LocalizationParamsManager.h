#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\UnityEngine_CoreModule\UnityEngine_MonoBehaviour.h"
#include "I2_Loc_LocalizationParamsManager_ParamValue.h"
namespace Assembly_CSharp::I2::Loc { struct LocalizationParamsManager_ParamValue; };
namespace mscorlib::System::Collections::Generic { template <typename T> struct List_1; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
namespace mscorlib::System { struct String; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };

namespace Assembly_CSharp::I2::Loc
{
	struct LocalizationParamsManager : UnityEngine_CoreModule::UnityEngine::MonoBehaviour
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		mscorlib::System::Collections::Generic::List_1<Assembly_CSharp::I2::Loc::LocalizationParamsManager_ParamValue>* _Params;
		bool _IsGlobalManager;
		mscorlib::System::String* GetParameterValue(mscorlib::System::String* ParamName);
		void SetParameterValue(mscorlib::System::String* ParamName, mscorlib::System::String* ParamValue, bool localize);
		void OnLocalize();
		void OnEnable();
		void DoAutoRegister();
		void OnDisable();
		void _ctor();
	};
}

