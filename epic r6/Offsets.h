#pragma once

// Game ->
#define ADDRESS_GAMEMANAGER 0x5306348
#define ADDRESS_GAMERENDERER 0x52f5bd8

// Game -> GameRenderer ->
#define OFFSET_GAMERENDERER_DEREF 0x68
#define OFFSET_GAMERENDERER_ENGINELINK 0x0 // Deref ->
#define OFFSET_ENGINELINK_ENGINE 0x130 // EngineLink ->
#define OFFSET_ENGINE_CAMERA 0x420 // Engine ->

// Game -> GameRenderer -> Camera ->
#define OFFSET_CAMERA_VIEWRIGHT 0x7D0
#define OFFSET_CAMERA_VIEWUP 0x7E0
#define OFFSET_CAMERA_VIEWFORWARD 0x7F0
#define OFFSET_CAMERA_VIEWTRANSLATION 0x800
#define OFFSET_CAMERA_VIEWFOVX 0x810
#define OFFSET_CAMERA_VIEWFOVY 0x824

// Game -> GameManager ->
#define OFFSET_GAMEMANAGER_ENTITYLIST 0x1C8
#define OFFSET_GAMEMANAGER_ENTITY 0x8

// Game -> GameManager -> EntityList -> INDEX -> Entity ->
#define OFFSET_ENTITY_ENTITYINFO 0x28
#define OFFSET_ENTITYINFO_MAINCOMPONENT 0xD8 // EntityInfo ->
#define OFFSET_MAINCOMPONENT_CHILDCOMPONENT 0x8 // MainComponent ->
#define OFFSET_CHILDCOMPONENT_HEALTH_INT 0x148 // ChildComponent ->
#define OFFSET_CHILDCOMPONENT_HEALTH_FLOAT 0x238 // ChildComponent ->

// Game -> GameManager -> EntityList -> INDEX ->
#define OFFSET_ENTITY_REF 0x20
#define OFFSET_ENTITY_HEAD 0x670
#define OFFSET_ENTITY_NECK 0xF70
#define OFFSET_ENTITY_RIGHT_HAND 0x6A0
#define OFFSET_ENTITY_CHEST 0xFB0
#define OFFSET_ENTITY_STOMACH 0xF90
#define OFFSET_ENTITY_PELVIS 0xFD0
#define OFFSET_ENTITY_FEET 0x6C0
