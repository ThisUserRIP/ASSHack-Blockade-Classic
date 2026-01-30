#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
namespace mscorlib::System { struct String; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace mscorlib::System { struct Object; };
namespace mscorlib::System::Diagnostics { struct StackTrace; };

namespace UnityEngine_CoreModule::UnityEngine
{
	struct StackTraceUtility : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		struct StaticFields
		{
			mscorlib::System::String* projectFolder;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		static void SetProjectFolder(mscorlib::System::String* folder);
		static mscorlib::System::String* ExtractStackTrace();
		static void ExtractStringFromExceptionInternal(mscorlib::System::Object* exceptiono, mscorlib::System::String& message, mscorlib::System::String& stackTrace);
		static mscorlib::System::String* ExtractFormattedStackTrace(mscorlib::System::Diagnostics::StackTrace* stackTrace);
		static void _cctor();
	};
}

