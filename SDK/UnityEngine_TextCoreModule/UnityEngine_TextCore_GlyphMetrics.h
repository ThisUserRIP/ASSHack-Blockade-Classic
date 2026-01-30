#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Single.h"
namespace mscorlib::System { struct Single; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
namespace mscorlib::System { struct Object; };

namespace UnityEngine_TextCoreModule::UnityEngine::TextCore
{
	struct GlyphMetrics
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		float m_Width;
		float m_Height;
		float m_HorizontalBearingX;
		float m_HorizontalBearingY;
		float m_HorizontalAdvance;
		float get_width();
		float get_height();
		float get_horizontalBearingX();
		float get_horizontalBearingY();
		float get_horizontalAdvance();
		void _ctor(float width, float height, float bearingX, float bearingY, float advance);
		int32_t GetHashCode();
		bool Equals(mscorlib::System::Object* obj);
		bool Equals(UnityEngine_TextCoreModule::UnityEngine::TextCore::GlyphMetrics other);
	};
}

