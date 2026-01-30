#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
namespace mscorlib::System { struct String; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace mscorlib::System { struct Object; };
namespace DOTween::DG::Tweening { struct Tween; };
#include "DG_Tweening_LogBehaviour.h"

namespace DOTween::DG::Tweening::Core
{
	struct Debugger : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		struct StaticFields
		{
			int32_t _logPriority;
			mscorlib::System::String* _LogPrefix;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		static int32_t get_logPriority();
		static void Log(mscorlib::System::Object* message);
		static void LogWarning(mscorlib::System::Object* message, DOTween::DG::Tweening::Tween* t);
		static void LogError(mscorlib::System::Object* message);
		static void LogReport(mscorlib::System::Object* message);
		static void LogSafeModeReport(mscorlib::System::Object* message);
		static void LogInvalidTween(DOTween::DG::Tweening::Tween* t);
		static void LogNestedTween(DOTween::DG::Tweening::Tween* t);
		static void LogNullTween(DOTween::DG::Tweening::Tween* t);
		static void LogNonPathTween(DOTween::DG::Tweening::Tween* t);
		static void LogMissingMaterialProperty(mscorlib::System::String* propertyName);
		static void LogMissingMaterialProperty(int32_t propertyId);
		static void LogRemoveActiveTweenError(mscorlib::System::String* errorInfo, DOTween::DG::Tweening::Tween* t);
		static void LogAddActiveTweenError(mscorlib::System::String* errorInfo, DOTween::DG::Tweening::Tween* t);
		static void SetLogPriority(DOTween::DG::Tweening::LogBehaviour logBehaviour);
	};
}

