#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "PERFORMANCE_STATUS.h"
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
namespace mscorlib::System { struct String; };
namespace UnityEngine_CoreModule::UnityEngine { struct Texture2D; };
#include "..\UnityEngine_CoreModule\UnityEngine_Rect.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Rect; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };

namespace Assembly_CSharp
{
	struct NYMissionTask : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		Assembly_CSharp::PERFORMANCE_STATUS TS;
		int32_t taskID;
		mscorlib::System::String* Task;
		UnityEngine_CoreModule::UnityEngine::Texture2D* Background;
		UnityEngine_CoreModule::UnityEngine::Texture2D* Check;
		int32_t target_value;
		int32_t current_value;
		int32_t offset_value;
		UnityEngine_CoreModule::UnityEngine::Rect CheckBoxRect;
		UnityEngine_CoreModule::UnityEngine::Rect TaskRect;
		void _ctor(int32_t id, mscorlib::System::String* _task, int32_t _target_value);
		void DrawTask(UnityEngine_CoreModule::UnityEngine::Rect _r);
		void SetOffsetValue(int32_t _value);
	};
}

