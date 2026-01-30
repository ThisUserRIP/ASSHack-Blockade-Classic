#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "..\mscorlib\System_Single.h"
namespace mscorlib::System { struct Single; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };

namespace Assembly_CSharp
{
	struct vp_Perlin : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		IL2CPP::Array<int32_t>* p;
		IL2CPP::Array<float>* g3;
		IL2CPP::Array<float>* g2;
		IL2CPP::Array<float>* g1;
		struct StaticFields
		{
			int32_t B;
			int32_t BM;
			int32_t N;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		float s_curve(float t);
		float lerp(float t, float a, float b);
		void setup(float value, int32_t& b0, int32_t& b1, float& r0, float& r1);
		float at2(float rx, float ry, float x, float y);
		float at3(float rx, float ry, float rz, float x, float y, float z);
		float Noise(float arg);
		float Noise(float x, float y);
		float Noise(float x, float y, float z);
		void normalize2(float& x, float& y);
		void normalize3(float& x, float& y, float& z);
		void _ctor();
	};
}

