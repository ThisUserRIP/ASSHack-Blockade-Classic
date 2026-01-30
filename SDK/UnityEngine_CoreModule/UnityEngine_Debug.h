#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
namespace UnityEngine_CoreModule::UnityEngine { struct ILogger; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
#include "UnityEngine_Vector3.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Vector3; };
#include "UnityEngine_Color.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Color; };
#include "..\mscorlib\System_Single.h"
namespace mscorlib::System { struct Single; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
namespace mscorlib::System { struct Byte; };
namespace mscorlib::System { struct Byte; };
namespace mscorlib::System { struct String; };
namespace mscorlib::System { struct Object; };
namespace UnityEngine_CoreModule::UnityEngine { struct Object; };
namespace mscorlib::System { struct Exception; };

namespace UnityEngine_CoreModule::UnityEngine
{
	struct Debug : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		struct StaticFields
		{
			UnityEngine_CoreModule::UnityEngine::ILogger* s_DefaultLogger;
			UnityEngine_CoreModule::UnityEngine::ILogger* s_Logger;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		static UnityEngine_CoreModule::UnityEngine::ILogger* get_unityLogger();
		static void DrawLine(UnityEngine_CoreModule::UnityEngine::Vector3 start, UnityEngine_CoreModule::UnityEngine::Vector3 end, UnityEngine_CoreModule::UnityEngine::Color color, float duration);
		static void DrawLine(UnityEngine_CoreModule::UnityEngine::Vector3 start, UnityEngine_CoreModule::UnityEngine::Vector3 end, UnityEngine_CoreModule::UnityEngine::Color color);
		static void DrawLine(UnityEngine_CoreModule::UnityEngine::Vector3 start, UnityEngine_CoreModule::UnityEngine::Vector3 end);
		static void DrawLine(UnityEngine_CoreModule::UnityEngine::Vector3 start, UnityEngine_CoreModule::UnityEngine::Vector3 end, UnityEngine_CoreModule::UnityEngine::Color color, float duration, bool depthTest);
		static void Break();
		static int32_t ExtractStackTraceNoAlloc(uint8_t* buffer, int32_t bufferMax, mscorlib::System::String* projectFolder);
		static void Log(mscorlib::System::Object* message);
		static void Log(mscorlib::System::Object* message, UnityEngine_CoreModule::UnityEngine::Object* context);
		static void LogFormat(mscorlib::System::String* format, IL2CPP::Array<mscorlib::System::Object*>* args);
		static void LogError(mscorlib::System::Object* message);
		static void LogError(mscorlib::System::Object* message, UnityEngine_CoreModule::UnityEngine::Object* context);
		static void LogErrorFormat(mscorlib::System::String* format, IL2CPP::Array<mscorlib::System::Object*>* args);
		static void LogErrorFormat(UnityEngine_CoreModule::UnityEngine::Object* context, mscorlib::System::String* format, IL2CPP::Array<mscorlib::System::Object*>* args);
		static void LogException(mscorlib::System::Exception* exception);
		static void LogException(mscorlib::System::Exception* exception, UnityEngine_CoreModule::UnityEngine::Object* context);
		static void LogWarning(mscorlib::System::Object* message);
		static void LogWarning(mscorlib::System::Object* message, UnityEngine_CoreModule::UnityEngine::Object* context);
		static void LogWarningFormat(mscorlib::System::String* format, IL2CPP::Array<mscorlib::System::Object*>* args);
		static void LogWarningFormat(UnityEngine_CoreModule::UnityEngine::Object* context, mscorlib::System::String* format, IL2CPP::Array<mscorlib::System::Object*>* args);
		static bool get_isDebugBuild();
		static bool CallOverridenDebugHandler(mscorlib::System::Exception* exception, UnityEngine_CoreModule::UnityEngine::Object* obj);
		static bool IsLoggingEnabled();
		static void _cctor();
		static void DrawLine_Injected(UnityEngine_CoreModule::UnityEngine::Vector3& start, UnityEngine_CoreModule::UnityEngine::Vector3& end, UnityEngine_CoreModule::UnityEngine::Color& color, float duration, bool depthTest);
	};
}

