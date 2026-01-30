#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
namespace Assembly_CSharp { struct Block; };
#include "BlockDirection.h"
#include "..\mscorlib\System_Byte.h"
namespace mscorlib::System { struct Byte; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };

namespace Assembly_CSharp
{
	struct BlockData
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		Assembly_CSharp::Block* block;
		Assembly_CSharp::BlockDirection direction;
		uint8_t health;
		void _ctor(Assembly_CSharp::Block* block);
		void SetDirection(Assembly_CSharp::BlockDirection direction);
		Assembly_CSharp::BlockDirection GetDirection();
		uint8_t GetLight();
		bool IsEmpty();
		bool IsAlpha();
		bool IsSolid();
		bool IsFluid();
		void SetHealth(uint8_t _health);
		uint8_t GetHealth();
	};
}

