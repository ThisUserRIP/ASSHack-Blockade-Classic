#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace mscorlib::System { struct String; };

namespace Unity_RenderPipelines_Core_Runtime::UnityEngine::Experimental::Rendering::RenderGraphModule
{
	struct RenderGraphDebugParams : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		bool clearRenderTargetsAtCreation;
		bool clearRenderTargetsAtRelease;
		bool disablePassCulling;
		bool immediateMode;
		bool logFrameInformation;
		bool logResources;
		void RegisterDebug(mscorlib::System::String* name);
		void UnRegisterDebug(mscorlib::System::String* name);
		void _ctor();
		bool _RegisterDebug_b__6_0();
		void _RegisterDebug_b__6_1(bool value);
		bool _RegisterDebug_b__6_2();
		void _RegisterDebug_b__6_3(bool value);
		bool _RegisterDebug_b__6_4();
		void _RegisterDebug_b__6_5(bool value);
		void _RegisterDebug_b__6_6();
		void _RegisterDebug_b__6_7();
	};
}

