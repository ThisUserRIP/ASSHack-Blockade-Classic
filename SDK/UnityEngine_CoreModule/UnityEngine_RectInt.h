#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace mscorlib::System { struct String; };
namespace mscorlib::System { struct IFormatProvider; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };

namespace UnityEngine_CoreModule::UnityEngine
{
	struct RectInt
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		int32_t m_XMin;
		int32_t m_YMin;
		int32_t m_Width;
		int32_t m_Height;
		int32_t get_x();
		void set_x(int32_t value);
		int32_t get_y();
		void set_y(int32_t value);
		int32_t get_width();
		void set_width(int32_t value);
		int32_t get_height();
		void set_height(int32_t value);
		void _ctor(int32_t xMin, int32_t yMin, int32_t width, int32_t height);
		mscorlib::System::String* ToString();
		mscorlib::System::String* ToString(mscorlib::System::String* format, mscorlib::System::IFormatProvider* formatProvider);
		bool Equals(UnityEngine_CoreModule::UnityEngine::RectInt other);
	};
}

