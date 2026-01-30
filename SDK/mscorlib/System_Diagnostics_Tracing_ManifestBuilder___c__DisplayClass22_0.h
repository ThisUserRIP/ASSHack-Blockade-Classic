#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "System_Diagnostics_Tracing_ManifestBuilder.h"
namespace mscorlib::System::Diagnostics::Tracing { struct ManifestBuilder; };
namespace mscorlib::System::Text { struct StringBuilder; };
namespace mscorlib::System { struct String; };
#include "System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "System_Void.h"
namespace mscorlib::System { struct Void; };

namespace mscorlib::System::Diagnostics::Tracing
{
	struct ManifestBuilder___c__DisplayClass22_0 : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		mscorlib::System::Text::StringBuilder* stringBuilder;
		mscorlib::System::String* eventMessage;
		int32_t writtenSoFar;
		void _ctor();
	};
}

