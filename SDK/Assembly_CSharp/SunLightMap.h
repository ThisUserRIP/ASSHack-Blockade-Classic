#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "..\mscorlib\System_Int16.h"
namespace mscorlib::System { struct Int16; };
namespace Assembly_CSharp { template <typename I> struct Map2D_1; };
#include "..\mscorlib\System_Byte.h"
namespace mscorlib::System { struct Byte; };
namespace Assembly_CSharp { template <typename I> struct Map3D_1; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "Vector3i.h"
namespace Assembly_CSharp { struct Vector3i; };

namespace Assembly_CSharp
{
	struct SunLightMap : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		Assembly_CSharp::Map2D_1<mscorlib::System::Int16>* rays;
		Assembly_CSharp::Map3D_1<mscorlib::System::Byte>* lights;
		void SetSunHeight(int32_t height, int32_t x, int32_t z);
		int32_t GetSunHeight(int32_t x, int32_t z);
		bool IsSunLight(int32_t x, int32_t y, int32_t z);
		bool IsSunLight(Assembly_CSharp::Vector3i chunkPos, Assembly_CSharp::Vector3i localPos, int32_t worldY);
		bool SetMaxLight(uint8_t light, Assembly_CSharp::Vector3i pos);
		bool SetMaxLight(uint8_t light, int32_t x, int32_t y, int32_t z);
		void SetLight(uint8_t light, Assembly_CSharp::Vector3i pos);
		void SetLight(uint8_t light, int32_t x, int32_t y, int32_t z);
		void SetLight(uint8_t light, Assembly_CSharp::Vector3i chunkPos, Assembly_CSharp::Vector3i localPos);
		uint8_t GetLight(Assembly_CSharp::Vector3i pos);
		uint8_t GetLight(int32_t x, int32_t y, int32_t z);
		uint8_t GetLight(Assembly_CSharp::Vector3i chunkPos, Assembly_CSharp::Vector3i localPos, int32_t worldY);
		void _ctor();
	};
}

