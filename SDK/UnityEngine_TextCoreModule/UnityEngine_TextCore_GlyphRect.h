#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
namespace mscorlib::System { struct Object; };

namespace UnityEngine_TextCoreModule::UnityEngine::TextCore
{
	struct GlyphRect
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		int32_t m_X;
		int32_t m_Y;
		int32_t m_Width;
		int32_t m_Height;
		int32_t get_x();
		int32_t get_y();
		int32_t get_width();
		int32_t get_height();
		static UnityEngine_TextCoreModule::UnityEngine::TextCore::GlyphRect get_zero();
		void _ctor(int32_t x, int32_t y, int32_t width, int32_t height);
		int32_t GetHashCode();
		bool Equals(mscorlib::System::Object* obj);
		bool Equals(UnityEngine_TextCoreModule::UnityEngine::TextCore::GlyphRect other);
		static void _cctor();
	};
}

