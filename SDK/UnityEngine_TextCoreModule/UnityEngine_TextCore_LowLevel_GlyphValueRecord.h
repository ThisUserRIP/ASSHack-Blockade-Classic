#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Single.h"
namespace mscorlib::System { struct Single; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
namespace mscorlib::System { struct Object; };

namespace UnityEngine_TextCoreModule::UnityEngine::TextCore::LowLevel
{
	struct GlyphValueRecord
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		float m_XPlacement;
		float m_YPlacement;
		float m_XAdvance;
		float m_YAdvance;
		float get_xPlacement();
		float get_yPlacement();
		float get_xAdvance();
		float get_yAdvance();
		int32_t GetHashCode();
		bool Equals(mscorlib::System::Object* obj);
		bool Equals(UnityEngine_TextCoreModule::UnityEngine::TextCore::LowLevel::GlyphValueRecord other);
	};
}

