#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
namespace mscorlib::System::Text { struct StringBuilder; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace mscorlib::System { struct String; };
namespace mscorlib::System { struct Object; };

namespace Unity_RenderPipelines_Core_Runtime::UnityEngine::Experimental::Rendering::RenderGraphModule
{
	struct RenderGraphLogger : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		mscorlib::System::Text::StringBuilder* m_Builder;
		int32_t m_CurrentIndentation;
		void Initialize();
		void IncrementIndentation(int32_t value);
		void DecrementIndentation(int32_t value);
		void LogLine(mscorlib::System::String* format, IL2CPP::Array<mscorlib::System::Object*>* args);
		mscorlib::System::String* GetLog();
		void _ctor();
	};
}

