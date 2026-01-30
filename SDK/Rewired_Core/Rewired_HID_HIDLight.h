#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "..\mscorlib\System_Byte.h"
namespace mscorlib::System { struct Byte; };
namespace mscorlib::System { struct Action; };
#include "..\mscorlib\System_Single.h"
namespace mscorlib::System { struct Single; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };

namespace Rewired_Core::Rewired::HID
{
	struct HIDLight : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		uint8_t ETzgfEDzTAvguvjNnKGLxkMUvIa;
		uint8_t sLeeWErrcJoFIpjJujrrejgaObuS;
		uint8_t RNwjAwfAmkyKNWyGgaOLEubUsoI;
		mscorlib::System::Action* cMdoZRLnnuacxKhLZFKYDkszzQER;
		float get_ColorR();
		void set_ColorR(float value);
		float get_ColorG();
		void set_ColorG(float value);
		float get_ColorB();
		void set_ColorB(float value);
		uint8_t get_ColorRRaw();
		void set_ColorRRaw(uint8_t value);
		uint8_t get_ColorGRaw();
		void set_ColorGRaw(uint8_t value);
		uint8_t get_ColorBRaw();
		void set_ColorBRaw(uint8_t value);
		void add_ValueChangedEvent(mscorlib::System::Action* value);
		void remove_ValueChangedEvent(mscorlib::System::Action* value);
		void _ctor();
		void _ctor(uint8_t colorRRaw, uint8_t colorGRaw, uint8_t colorBRaw);
	};
}

