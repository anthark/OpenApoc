#pragma once
struct research_data_t
{
	uint8_t labSize;
	uint8_t unknown1;
	uint8_t unknown2;
	uint8_t prereqType;
	uint16_t unknown3;
	uint16_t prereq;
	uint16_t leadsTo1;
	uint16_t leadsTo2;
	uint16_t prereqTech1;
	uint16_t prereqTech2;
	uint16_t prereqTech3;
	uint16_t score;
	uint32_t skillHours;
	uint8_t researchGroup;
	uint8_t ufopaediaGroup;
	uint16_t ufopaediaEntry;
};

static_assert(sizeof(struct research_data_t) == 28, "Invalid research_data size");

#define RESEARCH_DATA_OFFSET_START 0x13EE80
#define RESEARCH_DATA_OFFSET_END 0x13F954
#define RESEARCH_NAME_STRTAB_OFFSET_START 0x14E3BA
#define RESEARCH_NAME_STRTAB_OFFSET_END 0x14EA20
#define RESEARCH_DESCRIPTION_STRTAB_OFFSET_START 0x14EA22
#define RESEARCH_DESCRIPTION_STRTAB_OFFSET_END 0x1501F1