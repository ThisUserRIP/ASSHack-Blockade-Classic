#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
namespace mscorlib::System { struct String; };
namespace mscorlib::System::Collections::Generic { template <typename T> struct List_1; };
namespace Rewired_Core::Rewired::Internal { struct GUIText; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "Rewired_Config_LogLevelFlags.h"
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace mscorlib::System { struct Object; };
#include "Rewired_Config_LogLevel.h"

namespace Rewired_Core::Rewired
{
	struct Logger : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		struct StaticFields
		{
			int32_t screenLogLength;
			mscorlib::System::Collections::Generic::List_1<mscorlib::System::String>* __screenLog;
			Rewired_Core::Rewired::Internal::GUIText* _guiText;
			bool _logToScreen;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		static mscorlib::System::Collections::Generic::List_1<mscorlib::System::String>* get_screenLog();
		static Rewired_Core::Rewired::Config::LogLevelFlags get_logLevel();
		static bool get_logToScreen();
		static void set_logToScreen(bool value);
		static void LogEditor(mscorlib::System::Object* msg);
		static void LogEditor(mscorlib::System::Object* msg, bool requiredThreadSafety);
		static void LogWarningEditor(mscorlib::System::Object* msg);
		static void LogWarningEditor(mscorlib::System::Object* msg, bool requiredThreadSafety);
		static void LogErrorEditor(mscorlib::System::Object* msg);
		static void LogErrorEditor(mscorlib::System::Object* msg, bool requiredThreadSafety);
		static void Log(mscorlib::System::Object* msg);
		static void Log(mscorlib::System::Object* msg, bool requiredThreadSafety);
		static void LogWarning(mscorlib::System::Object* msg);
		static void LogWarning(mscorlib::System::Object* msg, bool requiredThreadSafety);
		static void LogError(mscorlib::System::Object* msg);
		static void LogError(mscorlib::System::Object* msg, bool requiredThreadSafety);
		static void LogNow(mscorlib::System::Object* msg, bool requireThreadSafety);
		static void LogWarningNow(mscorlib::System::Object* msg, bool requireThreadSafety);
		static void LogErrorNow(mscorlib::System::Object* msg, bool requireThreadSafety);
		static bool IsLoggingAllowed(Rewired_Core::Rewired::Config::LogLevel logLevel);
		static void LogToScreen(mscorlib::System::Object* msg);
		static void LogInit(mscorlib::System::Object* o);
		static void LogInitError(mscorlib::System::Object* o);
		static void LogInitWarning(mscorlib::System::Object* o);
		static void Log_VCTest(mscorlib::System::Object* o);
		static void LogUpdate(mscorlib::System::Object* o);
	};
}

