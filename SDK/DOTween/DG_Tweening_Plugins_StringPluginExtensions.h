#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "..\mscorlib\System_Char.h"
namespace mscorlib::System { struct Char; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace mscorlib::System::Text { struct StringBuilder; };

namespace DOTween::DG::Tweening::Plugins
{
	struct StringPluginExtensions : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		struct StaticFields
		{
			IL2CPP::Array<wchar_t>* ScrambledCharsAll;
			IL2CPP::Array<wchar_t>* ScrambledCharsUppercase;
			IL2CPP::Array<wchar_t>* ScrambledCharsLowercase;
			IL2CPP::Array<wchar_t>* ScrambledCharsNumerals;
			int32_t _lastRndSeed;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		static void _cctor();
		static void ScrambleChars(IL2CPP::Array<wchar_t>* chars);
		static mscorlib::System::Text::StringBuilder* AppendScrambledChars(mscorlib::System::Text::StringBuilder* buffer, int32_t length, IL2CPP::Array<wchar_t>* chars);
	};
}

