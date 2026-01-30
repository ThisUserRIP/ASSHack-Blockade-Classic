#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };

namespace Rewired_Core::Rewired::Utils::Classes::Data
{
	struct IntRect : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		int32_t x;
		int32_t y;
		int32_t width;
		int32_t height;
		int32_t get_yMin();
		void set_yMin(int32_t value);
		int32_t get_yMax();
		void set_yMax(int32_t value);
		int32_t get_xMin();
		void set_xMin(int32_t value);
		int32_t get_xMax();
		void set_xMax(int32_t value);
		int32_t get_top();
		void set_top(int32_t value);
		int32_t get_bottom();
		void set_bottom(int32_t value);
		int32_t get_left();
		void set_left(int32_t value);
		int32_t get_right();
		void set_right(int32_t value);
		void _ctor();
		void _ctor(int32_t inX, int32_t inY, int32_t inWidth, int32_t inHeight);
		Rewired_Core::Rewired::Utils::Classes::Data::IntRect* Clone();
		static Rewired_Core::Rewired::Utils::Classes::Data::IntRect* Clone(Rewired_Core::Rewired::Utils::Classes::Data::IntRect* intRect);
	};
}

