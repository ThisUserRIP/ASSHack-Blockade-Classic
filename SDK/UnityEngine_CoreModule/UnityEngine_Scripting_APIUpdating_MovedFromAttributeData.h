#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
namespace mscorlib::System { struct String; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };

namespace UnityEngine_CoreModule::UnityEngine::Scripting::APIUpdating
{
	struct MovedFromAttributeData
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		mscorlib::System::String* className;
		mscorlib::System::String* nameSpace;
		mscorlib::System::String* assembly;
		bool classHasChanged;
		bool nameSpaceHasChanged;
		bool assemblyHasChanged;
		bool autoUdpateAPI;
		void Set(bool autoUpdateAPI, mscorlib::System::String* sourceNamespace, mscorlib::System::String* sourceAssembly, mscorlib::System::String* sourceClassName);
	};
}

